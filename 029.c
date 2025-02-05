//C program to print How Many Inputs are taken from Keyboard using Scanf?
#include <stdio.h>

int main() {
    int count = 0;
    int num;
    char ch;

    printf("Enter numbers (press any non-numeric key to stop):\n");

    while (scanf("%d", &num) == 1) {
        count++;
    }
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Total inputs taken from keyboard: %d\n", count);

    return 0;
}
