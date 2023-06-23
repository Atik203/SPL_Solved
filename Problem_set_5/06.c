#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int array1[n];
    int array2[n];
    int sumArray[n];
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array1[i]);
    }
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array2[i]);
    }
    
    for (i = 0; i < n; i++) 
    {
        sumArray[i] = array1[i] + array2[i];
    }
    
    for (i = 0; i < n; i++) 
    {
        printf("%d ", sumArray[i]);
    }
    
    printf("\n");
    
    return 0;
}
