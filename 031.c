//31.	C program to set buffer with specific value using memset in C - Example of memset()

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    memset(str, 'A', 3);
    printf("String after memset: %s\n", str);
    return 0;
}