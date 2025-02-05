//C program to define, modify and access a global variable
#include<stdio.h>   
int a = 10;
int main()
{
    printf("Value of a = %d\n", a);
    a = 20;
    printf("Value of a = %d\n", a);
    return 0;
}