
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBitwise AND = %d", a & b);
    printf("\nBitwise OR = %d", a | b);
    printf("\nBitwise XOR = %d", a ^ b);

    return 0;
}
