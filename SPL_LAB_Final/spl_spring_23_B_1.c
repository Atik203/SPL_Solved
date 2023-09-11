#include <stdio.h>
#include <math.h>
int is_prime(int n)
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

int is_power_of_2(int n)
{
    if (n == 1)
        return 1;
    if (n <= 0 || n % 2 != 0)
    {
        return 0;
    }

    return is_power_of_2(n / 2);
}

int is_mersenne(int n)
{
    if (is_prime(n) && is_power_of_2(n + 1))
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);

    if (is_mersenne(n))
    {
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}