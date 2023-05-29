#include <stdio.h>

int main() {
    float number;
    scanf("%f", &number);

    printf("(a) Val: %10.6f\n", number);
    printf("(b) Val: %2.6f\n", number);
    printf("(c) Val: %.2f\n", number);
    printf("(d) Val: %d\n", (int)number);
    // print exponential notation/scientific notation
    printf("(e) Val: %e\n", number);

    return 0;
}
