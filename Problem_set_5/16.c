#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    { 
        if (i % 2 == 1) 
        {
            array[i] = 0;
        }
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
