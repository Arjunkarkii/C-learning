#include <stdio.h>

int main()
{
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("The numbers are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}