#include <stdio.h>
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    even_odd(n);
    return 0;
}