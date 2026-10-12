
#include <stdio.h>

int main()
{
    int numbers[5];
    int i, search, count = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the number to count: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            count++;
        }
    }

    printf("The number appears %d times.\n", count);

    return 0;
}
