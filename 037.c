//37.	Input hexadecimal value in C language and print decimal value
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &a);
    printf("Decimal value of %x is %d\n", a, a);
    return 0;
}