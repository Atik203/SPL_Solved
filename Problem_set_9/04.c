#include <stdio.h>

int main()
{
    char s[100];
    fgets(s, 100, stdin);

    int count = 0;
    int flag = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        {
            flag = 0;
        }
        else
        {
            if (flag == 0)
            {
                count++;
                flag = 1;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
