//40.	printf() examples/variations in C
#include <stdio.h>

int main() {
    // 1. Basic printf() examples
    printf("1. Basic printf() examples:\n");
    printf("Hello, World!\n\n");

    // 2. Printing variables with format specifiers
    printf("2. Printing variables with format specifiers:\n");
    int age = 25;
    float height = 5.9;
    double salary = 12345.6789;
    char grade = 'A';
    char name[] = "John Doe";

    printf("Age: %d\n", age);                // %d for integer
    printf("Height: %.2f\n", height);        // %.2f for float with 2 decimal places
    printf("Salary: %.2lf\n", salary);       // %.2lf for double with 2 decimal places
    printf("Grade: %c\n", grade);            // %c for character
    printf("Name: %s\n\n", name);            // %s for string

    // 3. Width and precision formatting
    printf("3. Width and precision formatting:\n");
    int num = 123;
    float pi = 3.14159;

    printf("Number with width 10: %10d\n", num);      // Right-aligned, width 10
    printf("Number with width 10: %-10d (left-aligned)\n", num); // Left-aligned, width 10
    printf("Pi with precision 3: %.3f\n\n", pi);      // Precision of 3 decimal places

    // 4. Escape sequences
    printf("4. Escape sequences:\n");
    printf("Hello\tWorld!\n");                // \t for tab
    printf("This is a backslash: \\\n");      // \\ for backslash
    printf("He said, \"Hello!\"\n\n");        // \" for double quote

    // 5. Printing special characters
    printf("5. Printing special characters:\n");
    printf("Percentage sign: %%\n");          // %% for percentage sign
    printf("ASCII value of 'A': %d\n\n", 'A'); // %d for ASCII value of 'A'

    // 6. Printing in different number systems
    printf("6. Printing in different number systems:\n");
    int number = 255;
    printf("Decimal: %d\n", number);          // %d for decimal
    printf("Octal: %o\n", number);            // %o for octal
    printf("Hexadecimal (lowercase): %x\n", number);  // %x for lowercase hexadecimal
    printf("Hexadecimal (uppercase): %X\n\n", number); // %X for uppercase hexadecimal

    // 7. Printing pointers
    printf("7. Printing pointers:\n");
    int value = 42;
    int *ptr = &value;
    printf("Address of 'value': %p\n\n", (void*)ptr); // %p for pointer address

    // 8. Combining multiple format specifiers
    printf("8. Combining multiple format specifiers:\n");
    printf("Name: %s, Age: %d, Height: %.2f, Grade: %c\n\n", name, age, height, grade);

    // 9. Using field width and precision together
    printf("9. Using field width and precision together:\n");
    printf("Salary: %10.2lf\n", salary);      // Width 10, precision 2 for double
    printf("Pi: %10.4f\n\n", pi);             // Width 10, precision 4 for float

    // 10. Printing with leading zeros
    printf("10. Printing with leading zeros:\n");
    printf("Number with leading zeros: %05d\n\n", num); // %05d for 5 digits with leading zeros

    return 0;
}