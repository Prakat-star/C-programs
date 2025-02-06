//C program to find the Surface Area and Volume of the Cylinder
#include <stdio.h>
int main()
{
    float r, h, sa, vol;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%f %f", &r, &h);
    sa = 2 * 3.14 * r * (r + h);
    vol = 3.14 * r * r * h;
    printf("Surface Area of the cylinder: %f\n", sa);
    printf("Volume of the cylinder: %f\n", vol);
    return 0;
}