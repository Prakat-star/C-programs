//C program to check a string is palindrome or not without using library function
#include <stdio.h>
int main()
{
    char str[100];
    int i, length = 0, flag = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%s is not a palindrome\n", str);
    }
    else
    {
        printf("%s is a palindrome\n", str);
    }
    return 0;
}