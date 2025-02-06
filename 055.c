//C program to check a given character is an uppercase character or not without using the library function  
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase character.\n", ch);
    }
    else
    {
        printf("%c is not an uppercase character.\n", ch);
    }
    return 0;
}