#include <stdio.h>

int main() {
    int a;
    float b;
    scanf("%d %f", &a, &b);
    int c = b;
    printf("Assignment: %f assigned to an int produces %d\n", b, c);
    float d = a;
    printf("Assignment: %d assigned to a float produces %f\n", a, d);
    int e = (int)b;
    printf("Type Casting: (float) %f produces %d\n", b, e);
    float f = (float)a;
    printf("Type Casting: (int) %d produces %f\n", a, f);

    return 0;
}
