#include <stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number = 4;

    // call by value
    // we pass value of variable as argument
    square(number);

    // number retains it's original value cause this is
    // call by value and it makes a copy of the same var
    // that's why it doesn't change the original var.
    printf("number: %d\n", number);

    // call by reference
    // we pass address of variable as argument
    _square(&number);

    // this will change the actual value of var number
    // cause here we're passing the address
    printf("number: %d\n", number);

    return 0;
}

void square(int n)
{
    n *= n;
    printf("square is: %d\n", n);
}

void _square(int *n)
{
    (*n) *= (*n);
    printf("square = %d\n", *n);
}