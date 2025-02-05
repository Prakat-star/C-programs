//C program to find quotient and remainder
#include<stdio.h>
int main()
{
    int a, b, q, r;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    printf("Quotient of %d and %d is %d\n", a, b, q);
    printf("Remainder of %d and %d is %d\n", a, b, r);
    return 0;
}