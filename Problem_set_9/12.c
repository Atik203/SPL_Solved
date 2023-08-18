#include <stdio.h>
int main()
{
    char s[100];
    char word[100];
    fgets(s, sizeof(s), stdin);
    scanf("%s", word);
    int len1 = 0, len2 = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len1++;
    }
    for (int i = 0; word[i] != '\0'; i++)
    {
        len2++;
    }

    int count = 0;
    for (int i = 0; i <= len1 - len2; i++)
    {
        int flag = 1;
        for (int j = 0; j < len2; j++)
        {
            if (s[i + j] != word[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
