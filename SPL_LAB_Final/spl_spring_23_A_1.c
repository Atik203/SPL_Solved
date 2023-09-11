#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int digit_sum(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + digit_sum(n / 10);
}

int is_superPrime(int n)
{

    if (is_prime(n) && is_prime(digit_sum(n)))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (is_superPrime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}