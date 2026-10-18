
#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle = %.2f\n", area);

    return 0;
}
