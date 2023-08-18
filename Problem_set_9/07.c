#include <stdio.h>
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    printf("%s", s);

    return 0;
}