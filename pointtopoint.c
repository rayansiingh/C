#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    // printing val of i using pointer to pointer
    printf("%d\n", **pptr);

    // this will print value at pptr i.e. address of ptr
    printf("%d\p", *pptr);

    return 0;
}