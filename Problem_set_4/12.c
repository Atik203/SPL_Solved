#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int a = 1, b = 1;
    int i, c;
    
    printf("%d ", a);
    
    if (n > 1)
    {
        printf("%d ", b);
    }
    for (i = 3; i <= n; i++)
     {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    return 0;
}
