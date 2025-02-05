//C program to convert feet to inches
#include<stdio.h>
int main()
{
    float feet, inches;
    printf("Enter distance in feet: ");
    scanf("%f", &feet);
    inches = feet * 12;
    printf("Distance in inches = %.2f\n", inches);
    return 0;
}