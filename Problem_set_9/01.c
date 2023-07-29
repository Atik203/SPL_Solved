#include <stdio.h>
int main()
{
    char s[100];
    gets(s); // or fgets(s,100,stdin);
    int i = 0;
    int len = 0;
    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    printf("%d", len);

    return 0;
}