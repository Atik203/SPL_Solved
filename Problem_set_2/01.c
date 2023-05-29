#include <stdio.h>

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);

    // Addition
    int addition = x + y;
    printf("Addition: %d\n", addition);

    // Subtraction
    int subtraction = x - y;
    printf("Subtraction: %d\n", subtraction);

    // Multiplication
    int multiplication = x * y;
    printf("Multiplication: %d\n", multiplication);

    // Division
    int quotient = x / y;
    printf("Quotient: %d\n", quotient);

    // Remainder
    int remainder = x % y;
    printf("Remainder: %d\n", remainder);

    return 0;
}
