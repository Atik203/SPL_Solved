#include <stdio.h>
#include<math.h>

int main() {
    double a, b;
    int choice, divisionChoice;
    scanf("%lf %lf", &a, &b);
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Addition: %.2lf\n", a + b);
    }
     else if (choice == 2)
    {
        printf("Subtraction: %.2lf\n", a - b);
    }
     else if (choice == 3)
    {
        printf("Multiplication: %.2lf\n", a * b);
    }
    else if (choice == 4)
    {
        if (b != 0) {

            scanf("%d", &divisionChoice);

            if (divisionChoice == 1)
            {
                printf("Quotient: %.2lf\n", a / b);
            }
            else if (divisionChoice == 2)
            {
                printf("Reminder: %.2lf\n", fmod(a, b));
            }
            else
            {
                printf("Invalid division choice! Please enter a valid choice.\n");
            }
        }
        else {
            printf("Error: Divisor is zero\n");
        }
    }
    else {
        printf("Invalid choice! Please enter a valid choice.\n");
    }

    return 0;
}
