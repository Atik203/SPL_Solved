#include <stdio.h>
#include <string.h>
typedef struct Student
{
    char name[50];
    int id;
    float cg;
} student;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    student s[n];
    for (int i = 0; i < n; i++)
    {
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].cg);
        getchar();
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[0].cg < s[i].cg)
        {
            index = i;
        }
    }

    printf("%s\n", s[index].name);
    printf("%d\n", s[index].id);
    printf("%f\n", s[index].cg);
    return 0;
}