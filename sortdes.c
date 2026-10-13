
#include <stdio.h>

int main()
{
    int numbers[5];
    int i, j, temp;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Descending order: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
