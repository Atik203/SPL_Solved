#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (array[i] > array[j]) 
            {
                // Swap elements
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
