//C program to convert a given number of days into days, weeks, and years
#include <stdio.h>
int main()
{
    int days, weeks, years;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    return 0;
}