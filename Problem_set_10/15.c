#include <stdio.h>
int findMinimum(int input[], int size)
{
    int min = input[0];

    for (int i = 1; i < size; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
        }
    }

    return min;
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

    int min = findMinimum(a, n);
    printf("%d", min);
    return 0;
}