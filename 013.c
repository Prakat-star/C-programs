// 13.	C program to convert temperature from Fahrenheit to Celsius and vice versa
#include<stdio.h>   
int main()    
{    
    float f, c;  
    int choice;
    printf("Enter 1 to convert temperature from Fahrenheit to Celsius\n");
    printf("Enter 2 to convert temperature from Celsius to Fahrenheit\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Temperature in Celsius = %.2f\n", c);
    }
    else if(choice == 2)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Temperature in Fahrenheit = %.2f\n", f);
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;  
}