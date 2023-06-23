#include <stdio.h>

int main() {
    int n, i, number, position;
    scanf("%d", &n);
    
    int array[n+1]; // Increase size by 1 to accommodate the inserted number
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    
    scanf("%d", &number);
    scanf("%d", &position);
    
    // Shift elements to the right from position onwards
    for (i = n; i > position; i--) 
    {
        array[i] = array[i - 1];
    }
    
    array[position] = number;
    
    for (i = 0; i <= n; i++) 
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    return 0;
}
