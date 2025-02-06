//44.	C program to generate random numbers within a range
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, n, lower, upper;
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);
    printf("Enter the lower and upper limit: ");
    scanf("%d %d", &lower, &upper);
    srand(time(0)); // Seed for the random number generator
    for (i = 0; i < n; i++)
    {
        printf("%d\n", (rand() % (upper - lower + 1)) + lower);
    }
    return 0;
}