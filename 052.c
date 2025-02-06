//52.	C program to check a given character is alphanumeric or not without using the library function
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        printf("%c is an alphanumeric character.\n", ch);
    }
    else
    {
        printf("%c is not an alphanumeric character.\n", ch);
    }
    return 0;
}