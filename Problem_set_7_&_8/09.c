#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int firstRowSum = 0;
    int lastRowSum = 0;
    int diagonalSum = 0;
    int antiDiagonalSum = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) 
    {
        firstRowSum += matrix[0][i];
        lastRowSum += matrix[n - 1][i];
    }


    for (int i = 1; i < n-1; i++) 
    {
        for (int j = 1; j < n-1; j++) 
        {
            if(i==j)
            {
            diagonalSum += matrix[i][i];
            }
            if(i+j==n-1 && (i != n/2 && j !=n/2))
            {
                antiDiagonalSum += matrix[i][n - 1 - i];
            }
        }
    }    

    int sum=firstRowSum+lastRowSum+diagonalSum+antiDiagonalSum;
    printf("%d",sum);

    return 0;
}
