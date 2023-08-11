#include <stdio.h>
int stringLength(char s[])
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    int length = stringLength(s);
    printf("%d", length);
    return 0;
}