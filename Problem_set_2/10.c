#include <stdio.h>

int main() {
    int a, b, c;
    int result_a, result_b, result_c;
    scanf("%d %d %d", &a, &b, &c);

    result_a = (a + b) <= 80;
    result_b = !(a + c);
    result_c = a != 0;

    printf("a) %d\n", result_a);
    printf("b) %d\n", result_b);
    printf("c) %d\n", result_c);

    return 0;
}
