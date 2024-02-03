// write a fun to cal the sum, prod and avg of 2 num
// basically how to return multiple thing from a fun

#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a = 3, b = 5;
    int sum, prod, avg;

    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}