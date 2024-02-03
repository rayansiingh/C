// array as function arguments

#include <stdio.h>

void printNumbers(int arr[], int n);

int main()
{
    int marks[] = {1, 2, 3, 4, 5, 6};
    printNumbers(marks, 6);
    return 0;
}

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// #include <stdio.h>

// void printNumbers(int *arr, int n);

// int main()
// {
//     int marks[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(marks, 6);
//     return 0;
// }

// void printNumbers(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }