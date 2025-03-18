// Initialize an array and take the inputs from user (size and elements both)
// and output the difference between the largest and smallest element

#include <stdio.h>
#define max 50 // Limiting size of the array
int main()
{
    int arr[50];
    int size;
    printf("Enter size of the desired array(max size=50)\n:");
    scanf("%d/n", &size); // taking input for size of the array
    if (size > 50 || size <= 0)
    { // checking for valid array size
        printf("Enter valid size:");
        return 0;
    }
    printf("Enter elements:\n");
    // to take input for all the elements of the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // initializing the min and max value in the array
    int mi = arr[0], ma = arr[0];
    printf("Entered array:\n"); // Printing the entered array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        if (mi > arr[i])
        {
            mi = arr[i];
        }
        if (ma < arr[i])
        {
            ma = arr[i];
        }
    } // Printing max and min elements and their difference
    printf("\nThe min element in the array is %d and the max is %d.", mi, ma);
    printf("\nThe Difference between min and max elements is %d.", ma - mi);
    return 0;
}