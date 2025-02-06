//60.	C program to convert an uppercase character into lowercase without using library function
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an uppercase character: ");
    scanf("%c", &ch);
    ch = ch + 32;
    printf("Lowercase character: %c\n", ch);
    return 0;
}