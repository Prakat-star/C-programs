//244.	C program to find the sum of series 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2) / tgamma(i + 1);
    }
    printf("The sum of the series is: %f", sum);
    return 0;
}