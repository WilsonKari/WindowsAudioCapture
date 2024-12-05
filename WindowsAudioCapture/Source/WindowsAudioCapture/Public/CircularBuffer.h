#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"

namespace Audio
{
    /**
     * A fixed-size circular buffer implementation optimized for audio processing
     */
    template<typename T>
    class WINDOWSAUDIOCAPTURE_API TCircularBuffer
    {
    public:
        /** Constructor that initializes the buffer with a given size */
        explicit TCircularBuffer(int32 InSize = 1024)
            : Size(InSize)
            , Head(0)
            , Count(0)
        {
            Buffer.SetNum(Size);
        }

        /** Push a new value into the buffer */
        void Push(T Value)
        {
            Buffer[Head] = Value;
            Head = (Head + 1) % Size;
            Count = FMath::Min(Count + 1, Size);
        }

        /** Get average of all values in buffer */
        T GetAverage() const
        {
            if (Count == 0) return T(0);
            
            T Sum = T(0);
            for (int32 i = 0; i < Count; ++i)
            {
                Sum += Get(i);
            }
            return Sum / static_cast<T>(Count);
        }

        /** Calculate variance with pre-calculated average */
        T CalculateVariance(const T Average) const
        {
            if (Count < 2) return T(0);

            T SumSquaredDiff = T(0);
            
            for (int32 i = 0; i < Count; ++i)
            {
                T Diff = Get(i) - Average;
                SumSquaredDiff += Diff * Diff;
            }
            
            return SumSquaredDiff / static_cast<T>(Count - 1);
        }

        /** Get value at specific index */
        T Get(int32 Index) const
        {
            if (Count == 0) return T(0);
            int32 ActualIndex = (Size + Head - Count + Index) % Size;
            return Buffer[ActualIndex];
        }

        /** Get number of elements currently in buffer */
        int32 Num() const
        {
            return Count;
        }

        /** Check if buffer is full */
        bool IsFull() const
        {
            return Count == Size;
        }

        /** Clear all elements from buffer */
        void Clear()
        {
            Head = 0;
            Count = 0;
            Buffer.Empty(Size);
            Buffer.SetNum(Size);
        }

    private:
        TArray<T> Buffer;
        int32 Size;
        int32 Head;
        int32 Count;
    };
}
