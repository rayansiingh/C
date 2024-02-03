// to check if a number is divisible by 2 or not
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("%d", !num % 2);
    return 0;
}