//69.	C program to find the LCM (Lowest Common Multiple) of two integers
#include <stdio.h>
int main()
{
    int n1, n2, max;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("LCM of %d and %d is %d\n", n1, n2, max);
            break;
        }
        max++;
    }
    return 0;
}
