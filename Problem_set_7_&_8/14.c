#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[n][n];

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            int current = matrix[i][j];
            for (int k = i; k < m; k++) 
            {
             int start = 0;
            if (k == i) 
            {
                start = j + 1;
            }
        for (int l = start; l < n; l++) 
        {
          if (matrix[k][l] == current) 
          {
             matrix[k][l] = -1;
          }
        }
          }

         }
    }

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
