#include <stdio.h>
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("%s", s);

    return 0;
}