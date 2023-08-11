#include <stdio.h>
int Get_Number_And_Base()
{
    int num, base;
    scanf("%d", &num);
    scanf("%d", &base);

    if (base < 2 || base > 16)
    {
        return -1;
    }
    return num * 100 + base; // Store num and base as a single value
}

void Convert_Number(int num, int base)
{
    if (num == 0)
    {
        return;
    }

    Convert_Number(num / base, base);

    int remainder = num % base;

    if (remainder < 10)
    {
        printf("%d", remainder);
    }
    else
    {
        printf("%c", 'A' + (remainder - 10));
    }
}

void Show_Converted_Number(int num, int base)
{
    Convert_Number(num, base);
}

int main()
{
    int input = Get_Number_And_Base();

    if (input >= 0)
    {
        int num = input / 100;
        int base = input % 100;
        Show_Converted_Number(num, base);
    }

    return 0;
}
