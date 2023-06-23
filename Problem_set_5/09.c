#include <stdio.h>

int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    
    char array[n];
    for (i = 0; i < n; i++) 
    {
        scanf(" %c", &array[i]);
    }
    
    for (i = 0; i < n; i++) 
    {
        char ch = array[i];
        
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    printf("Count: %d\n", count);
    
    return 0;
}
