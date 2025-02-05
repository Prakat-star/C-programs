//printf() statement within another printf() statement in C
#include <stdio.h>

int main() {
    printf("Total characters: %d\n", printf("First: %d ", printf("Second: %d ", 42)));
    return 0;
}
