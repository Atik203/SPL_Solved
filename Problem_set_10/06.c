#include <stdio.h>

int calculate_sum(int a, int b)
{
    int total = a + b;

    printf("Sum In Function: %d\n", total);
    return total;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int total_in_function = calculate_sum(a, b);
    printf("Sum In Main: %d\n", total_in_function);

    return 0;
}
