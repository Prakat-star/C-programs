//45.	C Example to subtract two integers without using Minus (-) operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Difference of %d and %d is %d\n", a, b, a + ~b + 1);
    return 0;
}