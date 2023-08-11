#include <stdio.h>
void determine(int n)
{
    if (n > 0)
    {
        printf("Positive");
    }
    else if (n < 0)
    {
        printf("Negative");
    }
    else
        printf("Zero");
}

int main()
{
    int n;
    scanf("%d", &n);
    determine(n);
    return 0;
}