#include <stdio.h>
#include <math.h>

int main() {
    double X;
    scanf("%lf", &X);

    int A = ceil(X);
    int B = floor(X);
    double C = fabs(X);
    
    printf("A = %d, B = %d, C = %.1f\n", A, B, C);

    return 0;
}
