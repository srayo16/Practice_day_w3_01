// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // arr="4 1 3 10 8"
    int min = INT_MIN;
    int max = INT_MAX;
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= min)
        {
            min = arr[i];
            minIndex = i;
            // printf("%d %d\n", arr[i], i);
        }
        if (arr[i] <= max)
        {
            max = arr[i];
            maxIndex = i;
            // printf("%d %d", arr[i], i);
        }
    }
    arr[maxIndex] = min;
    arr[minIndex] = max;
    // printf("%d ", arr[minIndex]);
    // printf("%d ", arr[maxIndex]);
    // printf("%d ", min);
    // printf("%d", max);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}