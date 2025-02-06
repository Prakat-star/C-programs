//42.	Calculate the distance between two cities from kilometers to meters, centimeters, feet and inches using C program
#include <stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = km * 100000;
    ft = km * 3280.84;
    inch = km * 39370.1;
    printf("Distance in meters = %.2f m\n", m);
    printf("Distance in centimeters = %.2f cm\n", cm);
    printf("Distance in feet = %.2f ft\n", ft);
    printf("Distance in inches = %.2f inch\n", inch);
    return 0;
}
