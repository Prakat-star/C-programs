//234.	C program to calculate length of the string using recursion.
#include <stdio.h>
int string_length(char []);
int main()
{
    char str[100];
    int length;
    printf("Enter a string: ");
    gets(str);
    length = string_length(str);
    printf("Length of %s = %d\n", str, length);
    return 0;
}
int string_length(char str[])
{
    static int count = 0;
    if (str[count] == '\0')
        return 0;
    else
    {
        count++;
        return 1 + string_length(str);
    }
}