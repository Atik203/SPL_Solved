#include <stdio.h>
#include <string.h>

int find_substr(const char a[], const char b[])
{
    int len_a = strlen(a);
    int len_b = strlen(b);

    for (int i = 0; i <= len_a - len_b; i++)
    {
        int j;
        for (j = 0; j < len_b; j++)
        {
            if (a[i + j] != b[j])
            {
                break;
            }
        }
        if (j == len_b)
        {
            return 1; // Substring found
        }
    }

    return -1; // Substring not found
}

int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    int result = find_substr(a, b);

    if (result == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
