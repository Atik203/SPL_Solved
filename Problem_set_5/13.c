#include <stdio.h>

int main() {
    int n, i, position;
    scanf("%d", &n);
    
    int array[n];
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &position);
    
    // Shift elements to the left from position onwards
    for (i = position; i < n - 1; i++) 
    {
        array[i] = array[i + 1];
    }
    
    for (i = 0; i < n - 1; i++) 
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    return 0;
}
