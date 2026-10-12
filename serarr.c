
#include <stdio.h>

int main()
{
    int numbers[5];
    int i, search, found = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Number not found.\n");
    }

    return 0;
}
