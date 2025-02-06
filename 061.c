//61.	C program to print all punctuation marks without using library function
#include <stdio.h>
int main()
{
    int i;
    printf("Punctuation marks\n");
    for (i = 33; i <= 47; i++)
    {
        printf("%c\n", i);
    }
    for (i = 58; i <= 64; i++)
    {
        printf("%c\n", i);
    }
    for (i = 91; i <= 96; i++)
    {
        printf("%c\n", i);
    }
    for (i = 123; i <= 126; i++)
    {
        printf("%c\n", i);
    }
    return 0;
}