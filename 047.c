//C Example for nested 'printf'
#include <stdio.h>

int main() {
    int num = 10;

    printf("The result is: %d\n", printf("Inner printf prints: %d\n", num));

    return 0;
}
