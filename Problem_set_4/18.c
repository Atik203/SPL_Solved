#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int reversed = 0;
    int original = n;
    
    while (n > 0) 
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if(reversed == original) 
    {
        printf("Yes\n");
    } 
    else 
    {
        printf("No\n");
    }
    
    return 0;
}
