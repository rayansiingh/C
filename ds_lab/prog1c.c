// Initialize an array with 10 random integers and then print 4 lines of output
// containing every element at even index, every element at odd index, all elements
// in reverse order and only the first and the last element.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((int)time(NULL)); // Generating random numbers
    int arr[5];
    int sh, high = -1;
    // Storing random numbers in the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 100;
        if (high < arr[i])
        { // Getting highest element
            sh = high;
            high = arr[i];
        }
    }
    int es = 0, os = 0, sum = 0;
    printf("Array Generated: ");
    // Adding up elements, odd and even indices elements
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
        if (i % 2 == 0)
        {
            es += arr[i];
        }
        else
        {
            os += arr[i];
        }
        if (arr[i] != high && sh < arr[i])
        { // Getting second highest element
            sh = arr[i];
        }
    } // Printing all the required outputs
    printf("\n\nSum of all elements: %d.\n", sum);
    printf("Sum of all elements at even indices: %d.\n", es);
    printf("Sum of all elements at odd indices: %d.\n", os);
    printf("The second highest element is %d.", sh);
}