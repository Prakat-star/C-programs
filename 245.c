//245.	C program to find the sum of series 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2)
#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += (float)(i * (i + 1)) / (i + 2);
    }
    printf("Sum of the series is: %.2f", sum);
    return 0;
}