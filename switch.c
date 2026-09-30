#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %d", num1 + num2);
            break;

        case 2:
            printf("Result = %d", num1 - num2);
            break;

        case 3:
            printf("Result = %d", num1 * num2);
            break;

        case 4:
            printf("Result = %d", num1 / num2);
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}