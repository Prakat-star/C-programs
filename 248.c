//C program to calculate the sum of series 1 +1/x^1 + 1/x^2 + 1/x^3 ... + 1/x^n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, x;
    float sum = 0;
    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);
    for (i = 0; i < n; i++)
    {
        sum += pow(x, i);
    }
    printf("Sum of series is: %f", sum);
    return 0;
}