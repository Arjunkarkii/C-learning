
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *numbers;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    numbers = malloc(n * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("The numbers are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    free(numbers);

    return 0;
}
