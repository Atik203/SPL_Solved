#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number <= 0) 
    {
        printf("No\n");
        return 0;
    }

    while (number != 1) 
    {
        if (number % 2 != 0)
         {
            printf("No\n");
            return 0;
        }
        else
        {
            number /= 2; 
        }
        }

    printf("Yes\n");

    return 0;
}
