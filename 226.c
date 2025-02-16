//266.	C program to swap two strings using user define function
#include <stdio.h>
#include <string.h>

void swap(char str1[], char str2[])
{
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    scanf("%s", str1);  // Read a single word (no spaces allowed)
    
    printf("Enter the second string: ");
    scanf("%s", str2);  // Read a single word (no spaces allowed)
    
    printf("\nBefore Swap:\n");
    printf("First String: %s\n", str1);
    printf("Second String: %s\n", str2);
    
    swap(str1, str2);  // Call the swap function
    
    printf("\nAfter Swap:\n");
    printf("First String: %s\n", str1);
    printf("Second String: %s\n", str2);
    
    return 0;
}
