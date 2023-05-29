#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);

    x = b * b - 4 * a * c;

    if (x > 0) 
   {
        root1 = (-b + sqrt(x)) / (2 * a);
        root2 = (-b - sqrt(x)) / (2 * a);

        printf("Roots: %.2lf, %.2lf\n", root1, root2);
    } else if (x == 0) 
    {
        root1 = -b / (2 * a);

        printf("Root: %.2lf\n", root1);
    } else {
        printf("Imaginary\n");
    }

    return 0;
}
