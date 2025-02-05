//C program to find cube of an integer number without using pow 
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a * a * a;
    printf("Cube of %d is %d\n", a, b);
    return 0;
}