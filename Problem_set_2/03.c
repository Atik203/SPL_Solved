#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    double up = (3.31 * a * a) + (2.01 * b * b * b);
    double down = (7.16 * b * b) + (2.01 * a * a * a);

    double x=up/down;
    printf("X = %.6lf\n",x);
  

    return 0;
}
