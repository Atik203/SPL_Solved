#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int first = 0;
    int second = 1;
    int next;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%d ", first);
            if (first == 0)
            {
                printf("& ");
            }
            else if (first % 2 == 0)
            {
                printf("$ ");
            }
            else
            {
                printf("# ");
            }
        }
        else
        {
            printf("%d", first);
        }
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}