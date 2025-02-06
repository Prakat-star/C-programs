//C program to calculate the surface area, volume, and space diagonal of cuboids    
#include <stdio.h>
#include <math.h>
int main()
{
    float l, b, h, sa, volume, sd;
    printf("Enter the length, breadth, and height of the cuboid: ");
    scanf("%f %f %f", &l, &b, &h);
    sa = 2 * (l * b + b * h + h * l);
    volume = l * b * h;
    sd = sqrt(l * l + b * b + h * h);
    printf("Surface area of the cuboid: %f\n", sa);
    printf("Volume of the cuboid: %f\n", volume);
    printf("Space diagonal of the cuboid: %f\n", sd);
    return 0;
}