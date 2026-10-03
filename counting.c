#include <stdio.h>

int main()
{
    int number, count;

    printf("Enter a number: ");
    scanf("%d", &number);

    count = 0;

    while (number != 0)
    {
        number = number / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}