#include <stdio.h>

int main() {
    int a, b, c;
    int result_1, result_2, result_3;
    scanf("%d %d %d", &a, &b, &c);

    result_1 = (a + b) <= 80 && b >= 0;
    result_2 = (a - b) == 0 || c != 0;
    result_3 = a != b || (b < a) && c > 0;

    printf("1) %d\n", result_1);
    printf("2) %d\n", result_2);
    printf("3) %d\n", result_3);

    return 0;
}
