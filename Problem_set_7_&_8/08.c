#include<stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int matrix[m][n];
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (matrix[i][j] > max) 
            {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Location: [%d][%d]\n", maxRow, maxCol);

    return 0;
}
