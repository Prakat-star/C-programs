//C program to convert a lowercase character into uppercase without using library function  
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    ch = ch - 32;
    printf("Uppercase character: %c\n", ch);
    return 0;
}