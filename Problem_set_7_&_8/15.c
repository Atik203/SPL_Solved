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

    int sum = 0;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
