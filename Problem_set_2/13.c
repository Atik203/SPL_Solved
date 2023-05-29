#include <stdio.h>
#include <math.h>

int main() {
  double x;
  double result;
  scanf("%lf", &x);

  result = 2 * pow(cos(x),2) - sqrt(3) * sin(x) + sin(x / 2);

  printf("%.8lf\n", result);

  return 0;
}
