//Program to find sum and average of two numbers
#include<stdio.h>
int main()
{
    int a, b, sum;
    float avg;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    avg = sum / 2.0;
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Average of %d and %d is %.2f\n", a, b, avg);
    return 0;
}