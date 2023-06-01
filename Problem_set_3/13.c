#include <stdio.h>

int main() {
    float a, b;
    int choice, divisionChoice;
    scanf("%f %f", &a, &b);
    scanf("%d", &choice);
    scanf("%d", &divisionChoice);

    if (choice == 1) {
        printf("Addition: %.2f\n", a + b);
    } 
    else if (choice == 2) {
        printf("Subtraction: %.2f\n", a - b);
    } 
    else if (choice == 3) {
        printf("Multiplication: %d\n", (int)a * (int)b);
    } 
    else 
    {
        if (divisionChoice == 1) {
            if (b != 0) {
                printf("Quotient: %d\n", (int)a / (int)b);
            } 
        
        } 
        else if (divisionChoice == 2) 
        {
            
            printf("Reminder: %.2f\n", fmod(a,b));
        } 
    }
     

    return 0;
}
