#include <stdio.h>
#include <math.h>
int power(int a, int b)
{
    return pow(a, b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int result = power(a, b);
    printf("%d to the power %d is %d", a, b, result);
    return 0;
}