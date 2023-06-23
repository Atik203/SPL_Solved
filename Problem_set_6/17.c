#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);
    for (int i = 1; i <= (r / 2) + 1; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            int mid = (r / 2) + 1;
            if (i == mid)
            {
                printf("$");
                continue;
            }
            if (j == mid || (j == mid - i + 1) || (j == mid + i - 1))
                printf("$");
            else
                printf("_");
        }
        printf("\n");
    }

    for (int i = r / 2; i >= 1; i--)
    {
        for (int j = 1; j <= r; j++)
        {
            int mid = (r / 2) + 1;
            if (j == mid || (j == mid - i + 1) || (j == mid + i - 1))
                printf("$");
            else
                printf("_");
        }
        printf("\n");
    }

    return 0;
}