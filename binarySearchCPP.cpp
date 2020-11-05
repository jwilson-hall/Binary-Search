// binarySearchCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int binarySearch(int *sortedArray, int targetValue, int arraySize) {
    int left = 0;
   /* int s1 = sizeof(sortedArray);
    int s2 = sizeof(sortedArray[0]);*/
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
int main()
{
    
    std::cout <<"target can be found at position: "<< binarySearch(foo, 4,8);
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
