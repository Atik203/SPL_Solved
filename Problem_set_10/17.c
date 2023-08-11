#include <stdio.h>
#include <stdlib.h>

int *sortArray(int input[], int size)
{
    int *resultArray = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        resultArray[i] = input[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (resultArray[j] > resultArray[j + 1])
            {
                int temp = resultArray[j];
                resultArray[j] = resultArray[j + 1];
                resultArray[j + 1] = temp;
            }
        }
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

    int *sortedResult = sortArray(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sortedResult[i]);
    }

    return 0;
}
