#include <stdio.h>

void printEvenNumbers(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (input[i] % 2 == 0)
        {
            printf("%d ", input[i]);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printEvenNumbers(a, n);
    return 0;
}
