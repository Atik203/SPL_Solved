#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Program
{
    char name[60];    // name of the program
    int total_memory; // total memory in bytes that
    int used_memory;  // total memory in bytes that the

} program;

int all_caps(char *input)
{
    while (*input)
    {
        if (!isupper(*input))
        {
            return 0;
        }
        input++;
    }
    return 1;
}

int isVirus(int total_memory, int used_memory)
{
    if (used_memory >= total_memory)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    program input[n];
    for (int i = 0; i < n; i++)
    {
        fgets(input[i].name, sizeof(input[i].name), stdin);
        input[i].name[strlen(input[i].name) - 1] = '\0';
        scanf("%d", &input[i].total_memory);
        scanf("%d", &input[i].used_memory);
        getchar();
    }

    int count = 0;
    char name[n][60];
    for (int i = 0; i < n; i++)
    {
        if (all_caps(input[i].name) && isVirus(input[i].total_memory, input[i].used_memory))
        {
            strcpy(name[count], input[i].name);
            count++;
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}