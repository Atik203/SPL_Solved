#include <stdio.h>
int main() {
    int n, m, i;
    scanf("%d", &n);
    int arrayA[n];
    for (i = 0; i < n; i++)
     {
        scanf("%d", &arrayA[i]);
    }
    scanf("%d", &m);
    int arrayB[m];
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &arrayB[i]);
    }

    int temp[n];
    for (int i = 0; i < n; i++) 
    {
        temp[i] = arrayA[i];
    }

    for (int i = 0; i < m; i++) 
    {
        arrayA[i] = arrayB[i];
    }
    for (int i = 0; i < n; i++) 
    {
        arrayB[i] = temp[i];
    }
    printf("Array A: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arrayA[i]);
    }
    
    printf("\nArray B: ");
    for (i = 0; i < m; i++) 
    {
        printf("%d ", arrayB[i]);
    }
    
    printf("\n");
    
    return 0;
}
