#include <stdio.h>

int main() {
    float number1, number2, result;
    char operator;
    scanf("%f %c %f", &number1, &operator, &number2);

    if (operator == '+') 
    {
        result = number1 + number2;
        printf("Addition: %.2f\n", result);
    } 
    else if (operator == '-') 
    {
        result = number1 - number2;
        printf("Subtraction: %.2f\n", result);
    } 
    else if (operator == '*')
     {
        result = number1 * number2;
        printf("Multiplication: %d\n", (int)result);
    } 
    else if (operator == '/') 
    {
        if (number2 != 0) 
        {
            result = number1 / number2;
            printf("Division: %.6f\n", result);
        } 
        else 
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
    } 
    else 
    {
        printf("Invalid operator\n");
    }

    return 0;
}
