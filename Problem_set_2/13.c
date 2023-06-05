#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main() {
  double x;
  double result;
  scanf("%lf", &x);

   x=(x*pi/180);
  result = 2 * (cos(x)*cos(x)) - sqrt(3) * sin(x) + sin (x / 2);

  printf("%.6lf\n", result);
  return 0;
}
