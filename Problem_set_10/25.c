#include <stdio.h>

void InputMatrix(int matrix[3][5])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[3][5])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[3][5], int scalar)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] *= scalar;
        }
    }
}

int main()
{
    int matrix[3][5];

    InputMatrix(matrix);
    printf("Original:\n");
    ShowMatrix(matrix);

    int scalar;
    scanf("%d", &scalar);

    ScalarMultiply(matrix, scalar);

    printf("Multiplied by %d:\n", scalar);
    ShowMatrix(matrix);

    return 0;
}
