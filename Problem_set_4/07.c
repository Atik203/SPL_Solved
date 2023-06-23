#include <stdio.h>
int main()
{
    char inputs[100];
    int n = 0;

    while (1)
        {
        char input;
        scanf(" %c", &input);
        inputs[n] = input;
        n++;
        if (input == 'A')
        {
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("Input %d: %c\n", i + 1, inputs[i]);
    }
    return 0;
}
