#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int size) {
    int i, temp;
    for (i = 0; i < size; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int n, m, i;
    scanf("%d", &n);
    
    int arrayA[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arrayA[i]);
    }
    
    scanf("%d", &m);
    
    int arrayB[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &arrayB[i]);
    }
    
    swapArrays(arrayA, arrayB, (n < m) ? n : m);
    
    printf("Array A: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arrayA[i]);
    }
    
    printf("\nArray B: ");
    for (i = 0; i < m; i++) {
        printf("%d ", arrayB[i]);
    }
    
    printf("\n");
    
    return 0;
}
