//24.	C program to read Formatted Time Once through Scanf in C Language
#include<stdio.h>
int main()
{
    int h, m, s;
    printf("Enter time in HH:MM:SS format: ");
    scanf("%d:%d:%d", &h, &m, &s);
    printf("Time is: %d:%d:%d\n", h, m, s);
    return 0;
}