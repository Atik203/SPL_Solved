#include <stdio.h>

int main() {
    int n, r;
    int numerator = 1, denominator = 1, result = 1;
    scanf("%d %d", &n, &r);
    
    if (n >= r) 
    {
        // Calculate numerator (n!)
        for (int i = 1; i <= n; i++) 
        {
            numerator *= i;
        }
        
        // Calculate denominator (r! * (n-r)!)
        for (int i = 1; i <= r; i++) 
        {
            denominator *= i;
        }
        
        for (int i = 1; i <= n - r; i++) 
        {
            denominator *= i;
        }
        
        // Calculate result (nCr)
        result = numerator / denominator;
        
        printf("%d\n", result);
    } 
    
    
    return 0;
}
