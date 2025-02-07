//C program to calculate the product of two binary numbers
#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 0;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, base);
        binary /= 10;
        base++;
    }
    return decimal;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, place = 1;
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * place;
        decimal /= 2;
        place *= 10;
    }
    return binary;
}

int main() {
    long long binary1, binary2;
    printf("Enter first binary number: ");
    scanf("%lld", &binary1);
    printf("Enter second binary number: ");
    scanf("%lld", &binary2);

    // Convert binary to decimal
    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);

    // Multiply decimal numbers
    int productDecimal = decimal1 * decimal2;

    // Convert result back to binary
    long long productBinary = decimalToBinary(productDecimal);

    printf("Product of binary numbers: %lld\n", productBinary);

    return 0;
}
