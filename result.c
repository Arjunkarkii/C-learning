#include <stdio.h>

int main()
{
    int math, science, computer;

    printf("Enter marks in Math: ");
    scanf("%d", &math);

    printf("Enter marks in Science: ");
    scanf("%d", &science);

    printf("Enter marks in Computer: ");
    scanf("%d", &computer);

    if (math >= 40 && science >= 40 && computer >= 40)
    {
        printf("The student has passed.");
    }
    else
    {
        printf("The student has failed.");
    }

    return 0;
}