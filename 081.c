//81.	C program to calculate the mean, variance, and standard deviation of real numbers
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float mean, variance, std_dev, sum = 0, sum1 = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float a[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++)
    {
        sum1 += pow((a[i] - mean), 2);
    }
    variance = sum1 / n;
    std_dev = sqrt(variance);
    printf("Mean: %f\n", mean);
    printf("Variance: %f\n", variance);
    printf("Standard Deviation: %f\n", std_dev);
    return 0;
}