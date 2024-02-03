#include <stdio.h>

void Hello();
int sum(int x, int y);

int main()
{
    Hello();
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    int s = sum(a, b); // argument or actual parameter
    printf("sum is %d", s);

    return 0;
}

void Hello()
{
    printf("hello world\n");
}

int sum(int x, int y) // parameter or formal parameter
{
    return x + y;
}