//C program to find the difference of two numbers
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Difference of %d and %d is %d\n", a, b, c);
    return 0;
}