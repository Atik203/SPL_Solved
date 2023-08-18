#include <stdio.h>
#include <string.h>

void reverseWords(char *str)
{
    int len = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Reverse individual words
    int start = 0;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
        {
            int end = i - 1;

            // Reverse the characters in the word
            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // Move start to the next word's beginning
        }
    }
}

int main()
{
    char str[1000];

    fgets(str, sizeof(str), stdin);

    reverseWords(str);

    printf("%s", str);

    return 0;
}
