#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d", &n);
    int arrayA[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arrayA[i]);
    }
    scanf("%d", &m);
    int arrayB[m];
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &arrayB[i]);
    }

    int intersection[100];
    int intersectionSize = 0;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (arrayA[i] == arrayB[j]) 
            {
                intersection[intersectionSize] = arrayA[i];
                intersectionSize++;
                break; 
            }
        }
    }

    if (intersectionSize == 0) 
    {
        printf("Empty set");
    } 
    else 
    {
        for (i = 0; i < intersectionSize; i++) 
        {
            printf("%d ", intersection[i]);
        }
    }
    printf("\n");

    return 0;
}
