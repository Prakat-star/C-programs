//89.	C program to read the height of a person and the print person is taller, dwarf, or average height person
#include <stdio.h>
int main()
{
    float height;
    printf("Enter the height of the person (in cm): ");
    scanf("%f", &height);
    if (height > 175)
    {
        printf("The person is taller\n");
    }
    else if (height < 160)
    {
        printf("The person is a dwarf\n");
    }
    else
    {
        printf("The person is an average height person\n");
    }
    return 0;
}