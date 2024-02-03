// * - value at address operator
// & - address of operator
#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;

    // address of age
    printf("%p\n", &age);

    // address of age using format specifier of unsigned int
    printf("%u\n", &age);

    // address of age
    printf("%p\n", ptr);

    // address of age using format specifier of unsigned int
    printf("%u\n", ptr);

    // address of ptr
    printf("%p\n", &ptr);

    // printing value in var age using diff methods

    // normal
    printf("%d\n", age);

    // using value at pointer ptr
    printf("%d\n", *ptr);

    // using value at address of var age
    printf("%d\n", *(&age));

    return 0;
}