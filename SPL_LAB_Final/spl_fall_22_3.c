#include <stdio.h>
#include <string.h>
typedef struct Customer
{
    char name[50];
    char birthday[15];
    char house[50];
    int cost[3];

} customer;

int substringChecker(char *mainString, char *searchString)
{
    while (*mainString != '\0')
    {
        char *mainPtr = mainString;
        char *subPtr = searchString;

        while (*mainPtr == *subPtr && *subPtr != '\0')
        {
            mainPtr++;
            subPtr++;
        }

        if (*subPtr == '\0')
        {
            return 1;
        }
        mainString++;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    customer input[n];

    for (int i = 0; i < n; i++)
    {
        fgets(input[i].name, sizeof(input[i].name), stdin);
        input[i].name[strlen(input[i].name) - 1] = '\0';

        fgets(input[i].birthday, sizeof(input[i].birthday), stdin);
        input[i].birthday[strlen(input[i].birthday) - 1] = '\0';

        fgets(input[i].house, sizeof(input[i].house), stdin);
        input[i].house[strlen(input[i].house) - 1] = '\0';
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &input[i].cost[j]);
        }
        getchar();
    }

    float avg[n];
    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += input[i].cost[j];
        }
        avg[i] = sum / 3;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Customer: %d\n", i + 1);
        if (input[i].house == "Gryffindor")
        {

            if (substringChecker(input[i].name, "est"))
            {

                printf("%s\n", input[i].name);
                printf("%s\n", input[i].birthday);
                printf("%s\n", input[i].house);
                printf("%.2f\n", avg[i]);
            }
            else
            {
                printf("Nil\n");
            }
        }
        else
        {

            if (substringChecker(input[i].name, "rus"))
            {
                printf("%s\n", input[i].name);
                printf("%s\n", input[i].birthday);
                printf("%s\n", input[i].house);
                printf("%.2f\n", avg[i]);
            }
            else
            {
                printf("Nil\n");
            }
        }
    }

    return 0;
}