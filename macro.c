
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = SQUARE(number);

    printf("Square = %d\n", result);

    return 0;
}
