#include <stdio.h>
#include <stdbool.h> // For using bool data type

int main()
{
    char s[100];
    fgets(s, 100, stdin);

    int count = 0;
    bool inWord = false;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        {
            inWord = false;
        }
        else
        {
            if (inWord == false)
            {
                count++;
                inWord = true;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
