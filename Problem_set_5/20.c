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

    int unionArray[100]; 
    int unionSize = 0;
    for (i = 0; i < n; i++) 
    {
        unionArray[unionSize] = arrayA[i];
        unionSize++;
    }

    for (i = 0; i < m; i++) 
    {
        int isDuplicate = 0;
        for (j = 0; j < unionSize; j++) 
        {
            if (arrayB[i] == unionArray[j]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) 
        {
            unionArray[unionSize] = arrayB[i];
            unionSize++;
        }
    }

    for (i = 0; i < unionSize; i++)
     {
        printf("%d ", unionArray[i]);
    }
    printf("\n");

    return 0;
}
