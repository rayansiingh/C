#include <stdio.h>

int main()
{
    // for loop

    for (int i = 1; i <= 5; i++)
    {
        printf("hello world %d\n", i);
    }

    // while loop

    int j = 1;
    while (j <= 5)
    {
        printf("Hello World\n");
        j++;
    }

    // do while loop

    int k = 1;
    do
    {
        printf("hello world\n");
        k++;
    } while (k <= 5);

    return 0;
}