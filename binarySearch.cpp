#include <iostream>

int binarySearch(int *sortedArray, int targetValue, int arraySize) {
    int left = 0;
    int right = arraySize;

    while (left <= right)
    {
        int midpoint = left + (right - left) / 2;
        if (sortedArray[midpoint] == targetValue)
        {
            return midpoint;
        }
        else if (sortedArray[midpoint] > targetValue)
        {
            right = midpoint - 1;
        }
        else
        {
            left = midpoint + 1;
        }
    }
    return -1;
}
