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
    int flag = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}