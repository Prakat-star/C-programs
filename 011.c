//11.	C program to read marks and print percentage and division
#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, total;
    float per;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5.0;
    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f\n", per);
    if(per >= 60)
    {
        printf("First division\n");
    }
    else if(per >= 50)
    {
        printf("Second division\n");
    }
    else if(per >= 40)
    {
        printf("Third division\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}