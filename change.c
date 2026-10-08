#include <stdio.h>

int main()
{
    int number = 10;
    int *pointer;

    pointer = &number;

    printf("Before changing = %d\n", number);

    *pointer = 50;

    printf("After changing = %d", number);

    return 0;
}