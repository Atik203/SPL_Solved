#include <stdio.h>

void InputMatrix(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[][100], int scalar, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] *= scalar;
        }
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    InputMatrix(matrix, n, m);
    printf("Original:\n");
    ShowMatrix(matrix, n, m);

    int scalar;
    scanf("%d", &scalar);

    ScalarMultiply(matrix, scalar, n, m);

    printf("Multiplied by %d:\n", scalar);
    ShowMatrix(matrix, n, m);

    return 0;
}
