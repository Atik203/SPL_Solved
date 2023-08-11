#include <stdio.h>

int find_substr(const char a[], const char b[])
{
    int i = 0;
    int j = 0;

    while (a[i] != '\0')
    {
        if (a[i] == b[j])
        {
            int temp_i = i;
            int temp_j = j;
            while (a[temp_i] != '\0' && b[temp_j] != '\0' && a[temp_i] == b[temp_j])
            {
                temp_i++;
                temp_j++;
            }
            if (b[temp_j] == '\0')
            {
                return 1; // Substring found
            }
        }
        i++;
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
