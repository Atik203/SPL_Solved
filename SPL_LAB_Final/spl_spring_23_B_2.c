#include <stdio.h>
#include <string.h>
typedef struct Card
{
    char name[60]; // name of the Pokemon card
    int stage;     // stage of the Pokemon, can take values 0, 1 or 2
    int hp;        // HP (hit points) of that Pokemon
} card;

int ends_with(char *input, char letter)
{
    while (*input)
    {
        input++;
    }
    input--;
    if (*input == letter)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    card input[n];
    for (int i = 0; i < n; i++)
    {
        fgets(input[i].name, sizeof(input[i].name), stdin);
        input[i].name[strlen(input[i].name) - 1] = '\0';
        scanf("%d", &input[i].stage);
        scanf("%d", &input[i].hp);
        getchar();
    }
    int card_prices[n];
    for (int i = 0; i < n; i++)
    {
        int p = 50;
        if (ends_with(input[i].name, 'X'))
        {
            p += 200;
            p += input[i].hp;
            if (input[i].stage == 1)
            {
                p += 30;
            }
            else if (input[i].stage == 2)
            {
                p += 70;
            }
        }
        else
        {
            p += input[i].hp;
            if (input[i].stage == 1)
            {
                p += 30;
            }
            else if (input[i].stage == 2)
            {
                p += 80;
            }
        }
        card_prices[i] = p;
    }
    int price = 0;
    for (int i = 0; i < n; i++)
    {
        price += card_prices[i];
    }
    printf("%d", price);
    return 0;
}