// // sum of n numbers

#include <stdio.h>

int sum(int n);

int main()
{
    printf("sum is: %d", sum(5));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}

// // factorial using recursion

// #include <stdio.h>
// long int multiplyNumbers(int n);
// int main()
// {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//     return 0;
// }

// long int multiplyNumbers(int n)
// {
//     if (n >= 1)
//         return n * multiplyNumbers(n - 1);
//     else
//         return 1;
// }

// // Fibonacci series without recursion

// #include <stdio.h>
// int main()
// {

//     int i, n;

//     // initialize first and second terms
//     int t1 = 0, t2 = 1;

//     // initialize the next term (3rd term)
//     int nextTerm = t1 + t2;

//     // get no. of terms from user
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     // print the first two terms t1 and t2
//     printf("Fibonacci Series: %d, %d, ", t1, t2);

//     // print 3rd to nth terms
//     for (i = 3; i <= n; ++i)
//     {
//         printf("%d, ", nextTerm);
//         t1 = t2;
//         t2 = nextTerm;
//         nextTerm = t1 + t2;
//     }

//     return 0;
// }

// // Fibonacci series with recursion

// #include <stdio.h>

// int fib(int n);

// int main()
// {
//     printf("%d", fib(6));
// }

// int fib(int n)
// {

//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     int fibNm1 = fib(n - 1);
//     int fibNm2 = fib(n - 2);
//     int fibN = fibNm1 + fibNm2;
//     // printf("fib of %d is : %d", n, fibN);
//     return fibN;
// }