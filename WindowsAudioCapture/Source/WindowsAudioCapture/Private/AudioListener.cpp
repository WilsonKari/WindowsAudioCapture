// Windows Audio Capture (WAC) by KwstasG (Kostas Giannakakis)
#include "AudioListener.h"
#include "WindowsAudioCapture.h"
#include <stdexcept>
#include <functiondiscoverykeys_devpkey.h>

AudioListener::AudioListener(int BitsPerSample, int FormatTag, int BlockAlign, int XSize)
{
    HRESULT hr = CoInitialize(nullptr);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to initialize COM library. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to initialize COM library");
    }

    REFERENCE_TIME hnsRequestedDuration = m_refTimesPerSec;

    hr = CoCreateInstance(m_CLSID_MMDeviceEnumerator, NULL, CLSCTX_ALL, m_IID_IMMDeviceEnumerator, (void**)&m_pEnumerator);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create instance of MMDeviceEnumerator. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to create instance of MMDeviceEnumerator");
    }

    // Log available devices
    LogAvailableDevices();

    m_pDevice = GetSpecificAudioDevice(L"CABLE Output (VB-Audio Virtual Cable)");
    if (m_pDevice == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to find CABLE Output (VB-Audio Virtual Cable). Using default audio input endpoint."));
        hr = m_pEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &m_pDevice);
        if (FAILED(hr))
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to get default audio input endpoint. HRESULT: 0x%08X"), hr);
            throw std::runtime_error("Failed to get default audio input endpoint");
        }
    }

    hr = m_pDevice->Activate(m_IID_IAudioClient, CLSCTX_ALL, NULL, (void**)&m_pAudioClient);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to activate audio client. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to activate audio client");
    }

    hr = m_pAudioClient->GetMixFormat(&m_pwfx);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get mix format. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to get mix format");
    }

    m_pwfx->wBitsPerSample = BitsPerSample;
    m_pwfx->nBlockAlign = BlockAlign;
    m_pwfx->wFormatTag = FormatTag;
    m_pwfx->cbSize = XSize;
    m_pwfx->nAvgBytesPerSec = m_pwfx->nSamplesPerSec * m_pwfx->nBlockAlign;

    hr = m_pAudioClient->Initialize(
        AUDCLNT_SHAREMODE_SHARED,
        0,  // No flags for normal capture
        hnsRequestedDuration,
        0,
        m_pwfx,
        NULL);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to initialize audio client. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to initialize audio client");
    }

    hr = m_pAudioClient->GetBufferSize(&m_bufferFrameCount);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get buffer size. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to get buffer size");
    }

    hr = m_pAudioClient->GetService(m_IID_IAudioCaptureClient, (void**)&m_pCaptureClient);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get audio capture client service. HRESULT: 0x%08X"), hr);
        throw std::runtime_error("Failed to get audio capture client service");
    }

    m_hnsActualDuration = (double)m_refTimesPerSec * m_bufferFrameCount / m_pwfx->nSamplesPerSec;

    UE_LOG(LogTemp, Log, TEXT("AudioListener initialized successfully."));
}

AudioListener::~AudioListener()
{
    if (m_pAudioClient)
    {
        m_pAudioClient->Stop();
    }
    CoUninitialize();
    UE_LOG(LogTemp, Log, TEXT("AudioListener destroyed."));
}

HRESULT AudioListener::RecordAudioStream(IAudioSink* Sink, std::atomic<bool>& Done)
{
    HRESULT hr = m_pAudioClient->Start();  // Start recording.
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to start audio client. HRESULT: 0x%08X"), hr);
        return hr;
    }

    BYTE* pData = nullptr;
    DWORD flags = 0;
    UINT32 packetLength = 0;
    UINT32 numFramesAvailable = 0;

    while (!Done)
    {
        Sleep(static_cast<DWORD>(m_hnsActualDuration / m_refTimesPerMS / 2));

        hr = m_pCaptureClient->GetNextPacketSize(&packetLength);
        if (FAILED(hr))
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to get next packet size. HRESULT: 0x%08X"), hr);
            return hr;
        }

        while (packetLength != 0)
        {
            hr = m_pCaptureClient->GetBuffer(&pData, &numFramesAvailable, &flags, NULL, NULL);
            if (FAILED(hr))
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to get buffer. HRESULT: 0x%08X"), hr);
                return hr;
            }

            hr = Sink->CopyData(pData, numFramesAvailable);
            if (FAILED(hr))
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to copy data. HRESULT: 0x%08X"), hr);
                return hr;
            }

            hr = m_pCaptureClient->ReleaseBuffer(numFramesAvailable);
            if (FAILED(hr))
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to release buffer. HRESULT: 0x%08X"), hr);
                return hr;
            }

            hr = m_pCaptureClient->GetNextPacketSize(&packetLength);
            if (FAILED(hr))
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to get next packet size. HRESULT: 0x%08X"), hr);
                return hr;
            }
        }
    }

    hr = m_pAudioClient->Stop();
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to stop audio client. HRESULT: 0x%08X"), hr);
    }
    return hr;
}

IMMDevice* AudioListener::GetSpecificAudioDevice(const std::wstring& deviceName)
{
    IMMDeviceCollection* pDeviceCollection = nullptr;
    IMMDevice* pDevice = nullptr;
    HRESULT hr;

    // Intentar primero con dispositivos de captura
    hr = m_pEnumerator->EnumAudioEndpoints(eCapture, DEVICE_STATE_ACTIVE, &pDeviceCollection);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to enumerate audio capture endpoints. HRESULT: 0x%08X"), hr);
        return nullptr;
    }

    pDevice = FindDeviceInCollection(pDeviceCollection, deviceName);
    pDeviceCollection->Release();

    if (pDevice == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Specific audio device not found: %s"), *FString(deviceName.c_str()));
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Specific audio device found: %s"), *FString(deviceName.c_str()));
    }

    return pDevice;
}

IMMDevice* AudioListener::FindDeviceInCollection(IMMDeviceCollection* pDeviceCollection, const std::wstring& deviceName)
{
    UINT count;
    HRESULT hr = pDeviceCollection->GetCount(&count);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get device count. HRESULT: 0x%08X"), hr);
        return nullptr;
    }

    for (UINT i = 0; i < count; i++)
    {
        IMMDevice* pTempDevice = nullptr;
        hr = pDeviceCollection->Item(i, &pTempDevice);
        if (FAILED(hr)) continue;

        IPropertyStore* pProps = nullptr;
        hr = pTempDevice->OpenPropertyStore(STGM_READ, &pProps);
        if (FAILED(hr))
        {
            pTempDevice->Release();
            continue;
        }

        PROPVARIANT varName;
        PropVariantInit(&varName);
        hr = pProps->GetValue(PKEY_Device_FriendlyName, &varName);
        if (SUCCEEDED(hr))
        {
            if (deviceName == varName.pwszVal)
            {
                PropVariantClear(&varName);
                pProps->Release();
                return pTempDevice;
            }
        }
        PropVariantClear(&varName);
        pProps->Release();
        pTempDevice->Release();
    }

    return nullptr;
}

void AudioListener::LogAvailableDevices()
{
    IMMDeviceCollection* pDeviceCollection = nullptr;
    HRESULT hr = m_pEnumerator->EnumAudioEndpoints(eCapture, DEVICE_STATE_ACTIVE, &pDeviceCollection);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to enumerate audio capture endpoints. HRESULT: 0x%08X"), hr);
        return;
    }

    UINT count;
    hr = pDeviceCollection->GetCount(&count);
    if (FAILED(hr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get device count. HRESULT: 0x%08X"), hr);
        pDeviceCollection->Release();
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("Available audio capture devices:"));
    for (UINT i = 0; i < count; i++)
    {
        IMMDevice* pDevice = nullptr;
        hr = pDeviceCollection->Item(i, &pDevice);
        if (FAILED(hr)) continue;

        IPropertyStore* pProps = nullptr;
        hr = pDevice->OpenPropertyStore(STGM_READ, &pProps);
        if (FAILED(hr))
        {
            pDevice->Release();
            continue;
        }

        PROPVARIANT varName;
        PropVariantInit(&varName);
        hr = pProps->GetValue(PKEY_Device_FriendlyName, &varName);
        if (SUCCEEDED(hr))
        {
            UE_LOG(LogTemp, Log, TEXT("  Device %d: %s"), i, varName.pwszVal);
        }
        PropVariantClear(&varName);
        pProps->Release();
        pDevice->Release();
    }

    pDeviceCollection->Release();
}