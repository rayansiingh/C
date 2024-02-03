// #include <stdio.h>

int main()
{
    int marks[3];

    printf("enter phy marks: ");
    scanf("%d", &marks[0]);

    printf("enter chem marks: ");
    scanf("%d", &marks[1]);

    printf("enter maths marks: ");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, maths = %d", marks[0], marks[1], marks[2]);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int aadhar[5];

//     // for input
//     int *ptr = &aadhar[0]; // or simply aadhar
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index: ", i);
//         scanf("%d", (ptr + i));
//     }

//     // for output
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index = %d\n", i, *(ptr + i));
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int aadhar[5];

//     // for input
//     int *ptr = aadhar; // name of array is a pointer itself
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index: ", i);
//         scanf("%d", &aadhar[i]);
//     }

//     // for output
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index = %d\n", i, aadhar[i]);
//     }
//     return 0;
// }