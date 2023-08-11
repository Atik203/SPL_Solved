#include <stdio.h>

int findGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return findGCD(b, a % b);
    }
}

int findLCM(int a, int b, int gcd)
{
    return (a * b) / gcd;
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2, gcd);

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
