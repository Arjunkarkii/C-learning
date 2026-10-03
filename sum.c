#include <stdio.h>

int main()
{
    int number, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    sum = 0;

    while (number != 0)
    {
        digit = number % 10;

        sum = sum + digit;

        number = number / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}