#include <stdio.h>

int main() {
    float a, b;
    int choice;
    scanf("%f %f", &a, &b);
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Addition: %.2f\n", a + b);
    } 
    else if (choice == 2) {
        printf("Subtraction: %.2f\n", a - b);
    } 
    else if (choice == 3) {
        printf("Multiplication: %.2f\n", a * b);
    }
     else 
      {
        if (b != 0) {
            printf("Quotient: %d\n", (int)a /(int) b);
        } 
      }

    return 0;
}
