
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    fprintf(fp, "Name: Arjun\n");
    fprintf(fp, "Age: 20\n");
    fprintf(fp, "Marks: 85\n");

    fclose(fp);

    printf("Data written to file successfully.\n");

    return 0;
}
