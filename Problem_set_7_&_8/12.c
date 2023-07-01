#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
         {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Reverse the matrix
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n / 2; j++) 
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
    }

    // Display the reversed matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
