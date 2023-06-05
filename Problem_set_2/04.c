#include <stdio.h>

int main() {
    int x,a;
    scanf("%d", &x);
    a=x;
    printf("X++ : %d\n", a++);
    a=x;
    printf("++X : %d\n", ++a);
    a=x;
    printf("X-- : %d\n", a--);
    a=x;
    printf("--X : %d\n", --a);

    return 0;
}
