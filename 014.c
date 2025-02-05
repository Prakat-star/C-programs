//14.	C program to calculate X^N (X to the power of N) using pow function
#include<stdio.h>
#include<math.h>
int main()
{
    int x, n;
    float result;
    printf("Enter base number: ");
    scanf("%d", &x);
    printf("Enter power number: ");
    scanf("%d", &n);
    result = pow(x, n);
    printf("%d to the power of %d is %.2f\n", x, n, result);
    return 0;
}