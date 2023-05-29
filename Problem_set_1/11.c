#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t  a = 4294967295;
    unsigned long int b  = 4294967295;
    uint64_t c  = 18446744073709551615ULL;
    // "ULL" used for the "c" to indicate that it is an unsigned long long integer.
    uint16_t d  = 65535;

    printf("The unsigned int value: %u\n",a );
    printf("The unsigned long int value: %lu\n",b);
    printf("The unsigned long long int value: %llu\n",c);
    printf("The unsigned short int value: %hu\n",d);

    return 0;
}

