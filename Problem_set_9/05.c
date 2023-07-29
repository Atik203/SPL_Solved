#include <stdio.h>
int main()
{
    char s[100];
    gets(s);
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len / 2; i++)
    {

        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("%s", s);
    return 0;
}