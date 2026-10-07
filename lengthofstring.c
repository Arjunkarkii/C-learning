#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int length;

    printf("Enter your name: ");
    scanf("%s", name);

    length = strlen(name);

    printf("Length = %d", length);

    return 0;
}