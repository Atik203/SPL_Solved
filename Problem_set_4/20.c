#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int term = 0;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) 
    {
        term = term * 10 + i;
        // printf("%d", term);  //it will print the series
        // if (i != n) 
        // {
        //     printf(" + ");
        // }
        sum += term;
    }
    
    printf("%d ", sum);
    
    return 0;
}
