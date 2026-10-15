
#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File not found. Run Program 1 first.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
