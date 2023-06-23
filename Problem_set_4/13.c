#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, fact = 1;
    printf("%d! = ", n);
    
    for (i = n; i >= 1; i--) 
    {
        printf("%d", i);
        fact *= i;
        
        if (i != 1)
            printf(" X ");
    }
    
    printf(" = %d\n", fact);
    
    return 0;
}
