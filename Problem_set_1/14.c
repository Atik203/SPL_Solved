#include <stdio.h>

int globalVar = 10; // Global variable

int main() {

    printf("A. Global: %d\n", globalVar); // Step A
    
    int localVar = 20; // Local variable with the same name
    printf("B. Local: %d\n", localVar); // Step B
    printf("C. Global: %d\n", globalVar); // Step C

    return 0;
}
