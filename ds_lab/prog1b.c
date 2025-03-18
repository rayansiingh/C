// Initialize an array with 10 random integers and then print 4 lines of output
// containing every element at even index, every element at odd index, all elements
// in reverse order and only the first and the last element.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((int)time(NULL)); // Generating random numbers
    int arr[10];
    // Storing random numbers in the array
    printf("Array Generated: ");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    // All elements at odd and even indices
    printf("\n\nAll elements at even indices: ");
    for (int i = 0; i < 10; i += 2)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAll elements at odd indices: ");
    for (int i = 1; i < 10; i += 2)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray in reverse order: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[9 - i]);
    }
    printf("\nThe first and the last elements in the array are %d and %d.", arr[0], arr[9]);
}