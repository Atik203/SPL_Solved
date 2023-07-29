#include <stdio.h>
// #include <ctype.h> // For the isalpha() and tolower() functions
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;

    // Convert the character to lowercase to handle both uppercase and lowercase vowels
    // char c = tolower(s[i]);
    // you can use it inside loop and only check for lower case.
}