//64.	C program to print all printable characters without using the library function
#include <stdio.h>
int main()
{
    int i;
    printf("Printable characters\n");
    for (i = 32; i <= 126; i++)
    {
        printf("%c\n", i);
    }
    return 0;
}