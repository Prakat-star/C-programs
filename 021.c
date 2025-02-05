//21.	C program to multiply two numbers using + operator
#include<stdio.h>
int main()
{
    int a, b, i, mul = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= b; i++)
    {
        mul = mul + a;
    }
    printf("Multiplication of %d and %d is %d\n", a, b, mul);
    return 0;
}
