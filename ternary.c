#include <stdio.h>
int main()
{
    int age;
    printf("enter num: ");
    scanf("%d", &age);
    (age > 17) ? printf("adult") : printf("child");
    return 0;
}