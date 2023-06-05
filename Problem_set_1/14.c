#include <stdio.h>

int Var = 10; // Global variable

int main() 
{

    printf("A. Global: %d\n",Var); // Step A
    
    int Var = 20; // Local variable with the same name
    printf("B. Local: %d\n",Var); // Step B
    printf("C. Global: %d\n",Var); // Step C

    return 0;
}
