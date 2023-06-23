#include <stdio.h>

int main() {
    int num;
    int isPrime = 1; // Assume the number is prime
    scanf("%d", &num);
    if (num <= 1) 
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } 
    else 
    {
        for (int i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) {
                isPrime = 0; // Number is divisible, not prime
                break;
            }
        }
    }
    
    if (isPrime)
    {
        printf("Prime\n");
    } 
    else 
    {
        printf("Not prime\n");
    }
    
    return 0;
}
