#include <stdio.h>
int main()
{
    int day;
    printf("enter day (1-7): ");
    scanf("%d", &day);
    // we can use characters if we want here to check
    // nested switch is allowedkk
    switch (day)
    {
    case 1:
        printf("monday");
        break;

    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("wednesday");
        break;

    case 4:
        printf("thursday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("saturday");
        break;

    case 7:
        printf("sunday");
        break;

    default:
        printf("enter a valid number");
    }
    return 0;
}