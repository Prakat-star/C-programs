//C program to convert ascii to integer (atoi implementation)
#include <stdio.h>
int main()
{
    char str[100];
    int i, num;
    printf("Enter a number: ");
    scanf("%s", str);
    i = 0;
    num = 0;
    while (str[i] != '\0')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    printf("Number = %d\n", num);
    return 0;
}