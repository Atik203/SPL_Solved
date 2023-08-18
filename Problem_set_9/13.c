#include <stdio.h>
#include <string.h>

int main()
{

    char s[100];
    fgets(s, sizeof(s), stdin);
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (s[j] == s[i])
            {
                for (int k = j; k < len; k++)
                {
                    s[k] = s[k + 1];
                }
            }
        }
    }

    printf("%s", s);
    return 0;
}
