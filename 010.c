//10.	C program to check whether a person is eligible for voting or not?
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("You are eligible for voting\n");
    }
    else
    {
        printf("You are not eligible for voting\n");
    }
    return 0;
}