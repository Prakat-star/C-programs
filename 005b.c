//C program to find cube of an integer number using pow
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = pow(a, 3);
    printf("Cube of %d is %.2f\n", a, b);
    return 0;
}