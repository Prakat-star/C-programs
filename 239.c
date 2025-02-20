//239.	C program to find the LCM (Lowest Common Multiple) of given numbers using recursion
#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int a, b, LCM;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &a, &b);
    if(a > b)
        LCM = lcm(b, a);
    else
        LCM = lcm(a, b);
    printf("LCM of %d and %d = %d", a, b, LCM);
    return 0;
}
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}