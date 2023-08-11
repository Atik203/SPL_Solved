#include <stdio.h>
#include <stdlib.h>

int *multiplyArrayBy2(int input[], int size)
{
    int *resultArray = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        resultArray[i] = input[i] * 2;
    }

    return resultArray;
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

    int *result = multiplyArrayBy2(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
