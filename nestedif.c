#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        if (number % 2 == 0)
        {
            printf("The number is positive and even.");
        }
        else
        {
            printf("The number is positive but odd.");
        }
    }
    else
    {
        printf("The number is not positive.");
    }

    return 0;
}