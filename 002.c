//2.	C program to find subtraction of two integer number

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Subtraction of %d and %d is %d\n", a, b, c);
    return 0;
}