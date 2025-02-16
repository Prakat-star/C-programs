//262.	C program to pass function as an argument to a function
#include <stdio.h>
void display()
{
    printf("Hello, World!\n");
}
void function(void (*ptr)())
{
    ptr();
}
int main()
{
    function(display);
    return 0;
}
