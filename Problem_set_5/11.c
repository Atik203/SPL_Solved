#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int arrayA[n];
    int arrayB[n];
 
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arrayA[i]);
    }

    for (i = 0; i < n; i++) 
    {
        arrayB[i] = arrayA[n - 1 - i];
    }
    
    printf("Array A: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arrayA[i]);
    }
    
    printf("\nArray B: ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", arrayB[i]);
    }
    
    printf("\n");
    
    return 0;
}
