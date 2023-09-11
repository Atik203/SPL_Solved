#include <stdio.h>

int prime(int n)
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

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int strong(int n)
{
    int original = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += factorial(digit);
        n = n / 10;
    }

    if (original == sum)
        return 1;
    else
        return 0;
}

int sum_of_odd(int n)
{
    int odd_sum = 0;
    int even_sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            even_sum += digit;
        }
        else
            odd_sum += digit;

        n = n / 10;
    }

    if (odd_sum < even_sum)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (prime(i) && !strong(i) && sum_of_odd(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}