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

void GeneratePrime(int N)
{
    printf("Prime less than %d: ", N);

    for (int i = 2; i < N; i++)
    {
        if (IsPrime(i))
        {
            printf("%d, ", i);
        }
    }

    printf("\n");
}

int main()
{
    int N;
    scanf("%d", &N);

    GeneratePrime(N);

    return 0;
}
