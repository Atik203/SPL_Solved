#include <stdio.h>
int convert(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 6 + convert(n / 6) * 10;
}

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 10 + sum_of_digit(n / 10);
}
int first_last_digit_sum(int n)
{
    int i = 0;
    int digit[i + 1];
    while (n > 0)
    {
        digit[i] = n % 10;
        n = n / 10;
        i++;
    }

    return digit[0] + digit[i - 1];
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int primeChecker(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int converted = convert(n);
    int first_last_sum = first_last_digit_sum(n);
    if (converted % 5 == 0 || primeChecker(0, first_last_sum) > 4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}