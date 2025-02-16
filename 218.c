//347.	C program to create, open and close a file.
#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File created successfully.\n");
        fclose(file);
    }
    return 0;
}
