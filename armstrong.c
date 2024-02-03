#include <stdio.h>
int main()
{
    int num, oNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    oNum = num;

    while (oNum != 0)
    {
        // remainder contains the last digit
        remainder = oNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        oNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
