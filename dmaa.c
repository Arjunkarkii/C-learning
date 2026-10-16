
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *numbers;
    int sum = 0;
    float average;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    numbers = malloc((size_t)n * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    free(numbers);

    return 0;
}
