// WAP to create an array of integers of size ‘n’ and return difference between the largest and the smallest value.

// #include <stdio.h>
// #include <limits.h>
// #define max 1000

// int main()
// {
//     int n, arr[max];
//     int minimum = INT_MAX, maximum = INT_MIN;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter your element: ");
//         scanf("%d", &arr[i]);
//         if (arr[i] < minimum)
//         {
//             minimum = arr[i];
//         }
//         if (arr[i] > maximum)
//         {
//             maximum = arr[i];
//         }
//     }
//     printf("The difference between the largest and the smallest value is: %d\n", maximum - minimum);

//     return 0;
// }

// WAP to create an array with 10 random integers and print 4 lines
// of output containing every element at even index, every
// element at odd index, all elements in reverse order and only first &
// last element

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main()
// {
//     int arr[10], n = 10;
//     srand(time(0));
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = rand() % 100;
//     }

//     // for even indexed elements
//     printf("Even indexed elements: ");
//     for (int i = 0; i < n; i += 2)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // for odd indexed elements
//     printf("Odd indexed elements: ");
//     for (int i = 1; i < n; i += 2)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // for reverse order
//     printf("Reverse order: ");
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // for first and last element
//     printf("First and last element: %d %d\n", arr[0], arr[n - 1]);
//     return 0;
// }

// Consider an integer array of size 5 and display following
// a. Sum of all Elements b. Sum of Alternate Elements
// c. Second Highest Element

// #include <stdio.h>
// #include <limits.h>
// #include <time.h>
// #include <stdlib.h>

// int main()
// {
//     int arr[5], n = 5;
//     int sum = 0, sum_alt = 0;
//     srand(time(0));
//     int randint = rand() % 100;

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = randint;
//         sum += arr[i];
//         randint = rand() % 100;
//     }

//     for (int i = 0; i < n; i += 2)
//     {
//         sum_alt += arr[i];
//     }

//     int max = arr[0], second_max = INT_MIN;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             second_max = max;
//             max = arr[i];
//         }
//         else if (arr[i] > second_max)
//         {
//             second_max = arr[i];
//         }
//     }
//     printf("All elements in the array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     printf("Sum of all elements: %d\n", sum);
//     printf("Sum of alternate elements: %d\n", sum_alt);
//     printf("Second highest element: %d\n", second_max);
//     return 0;
// }