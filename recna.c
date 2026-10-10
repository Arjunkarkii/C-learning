
#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int number, result;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative number.");
    }
    else
    {
        result = sum(number);
        printf("Sum = %d\n", result);
    }

    return 0;
}
