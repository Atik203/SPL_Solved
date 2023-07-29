#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);

    int i = 0;
    // Find the end of s1
    while (s1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    // Concatenate s2 to the end of s1
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    printf("%s\n", s1);

    return 0;
}
