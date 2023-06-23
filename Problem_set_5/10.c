#include <stdio.h>

int main() {
    int n, i, searchNum, found = 0;
    scanf("%d", &n);
    
    int array[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &searchNum);
    for (i = 0; i < n; i++) 
    {
        if (array[i] == searchNum) 
        {
            printf("Found at index: %d \n", i);
            found = 1;
        }
    }
    
    if (!found) 
    {
        printf("NOT FOUND");
    }
    
    printf("\n");
    
    return 0;
}
