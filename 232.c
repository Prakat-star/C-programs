//232.	C program to count digits of a number using recursion.
#include <stdio.h>
int count(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+count(n/10);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The number of digits in %d is %d",n,count(n));
    return 0;
}
