//4.	C program to print ASCII value of a character
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c is %d\n", c, c);
    return 0;
}