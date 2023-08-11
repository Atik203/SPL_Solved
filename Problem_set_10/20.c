#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int GenNthPrime(int N)
{
    int count = 0;
    int num = 2;

    while (count < N)
    {
        if (IsPrime(num))
        {
            count++;
        }
        num++;
    }

    return num - 1;
}

int main()
{
    int N;
    scanf("%d", &N);
    int nthPrime = GenNthPrime(N);
    printf("%dth Prime: %d\n", N, nthPrime);

    return 0;
}
