#include <stdio.h>

int calculate_sum(int numbers[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += numbers[i];
    }
    printf("Sum In Function: %d\n", total);
    return total;
}

int main()
{

    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int total_in_function = calculate_sum(numbers, n);
    printf("Sum In Main: %d\n", total_in_function);

    return 0;
}
