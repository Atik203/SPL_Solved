#include <stdio.h>

void print(char c)
{
    printf("Value received from main: %c", c);
}
int main()
{
    char c;
    scanf("%c", &c);
    print(c);
    return 0;
}