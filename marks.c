#include <stdio.h>

int main()
{
    float math, science, computer;
    float total, average;

    printf("Enter marks in Math: ");
    scanf("%f", &math);

    printf("Enter marks in Science: ");
    scanf("%f", &science);

    printf("Enter marks in Computer: ");
    scanf("%f", &computer);

    total = math + science + computer;
    average = total / 3;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f", average);

    return 0;
}