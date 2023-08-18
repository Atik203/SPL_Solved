#include <stdio.h>
char lower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

int main()
{
    char s[100];
    char c;
    fgets(s, sizeof(s), stdin);
    scanf("%c", &c);
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (lower(s[i]) == lower(c))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}