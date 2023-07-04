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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            {
              if( (i == 0 &&( j <= n/2 || j==n-1)) ||  // first row
                 (i == n-1 && (j >= n/2 || j==0)) ||    // last row
                  (i==n/2) ||                              // middle row
                  (((i>0 && i<n/2) && (j==n/2))) || 
                   ((i>0 && i<n/2) && (j==n-1)) ||  // upper middle rows
                 (((i<n-1 && i>n/2) && (j==n/2))) ||
                 ((i>n/2 && i<n-1) && (j==n-1)))   // down middle rows
            {
                sum += a[i][j];
            }
        }
    }

    printf("Total sum: %d\n", sum);

    return 0;
}


