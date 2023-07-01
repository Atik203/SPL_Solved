#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the sum for the specified positions
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
              if( (i == 0 && j < n/2) ||
           (i == n-1 && j > n/2) ||
           (j == (n/2) + 1)  || 
           (j == n-1 && i < n/2) ||
           (j == 0 && i > n/2) 
         ) 
            {
                sum += a[i][j];
            }
        }
    }

    // Print the result
    printf("Total sum: %d\n", sum);

    return 0;
}
