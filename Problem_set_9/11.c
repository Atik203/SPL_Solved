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
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += s[i] - '0';
        }
    }

    printf("%d", sum);
    return 0;
}