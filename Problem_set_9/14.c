#include <stdio.h>
#include <string.h>
#define ASCII_SIZE 255

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);

    int charCount[ASCII_SIZE] = {0};

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += ('a' - 'A');
        }

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            charCount[s[i]]++;
        }
    }

    int maxCount = 0;
    char maxChar = '\0';

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (charCount[i] > maxCount)
        {
            maxCount = charCount[i];
            maxChar = (char)i;
        }
    }

    printf("%c\n", maxChar);

    return 0;
}
