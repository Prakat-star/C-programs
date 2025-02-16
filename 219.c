//348.	C program to write text (characters) into file and print.
#include <stdio.h>
int main()
{
    FILE *file;
    char text[100];
    file = fopen("file.txt", "w");
    if (file == NULL)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("Enter text: ");
        scanf(" %[^\n]", text);
        fprintf(file, "%s", text);
        fclose(file);
        printf("Data written to file successfully.\n");
    }
    return 0;
}