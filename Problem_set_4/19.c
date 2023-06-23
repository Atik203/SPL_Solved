#include<stdio.h>

int main()
{
    double x,sinx=0,sign=1, pow=1, fact=1;
    int i;
    scanf("%lf",&x);
    for(i=1;i<=7;i+=2)
    {
        pow= pow * x;
        sinx = sinx + (sign*pow/fact);
        sign = -sign;
        pow = pow *x;
        fact = fact * (i+1) * (i+2);
    }
    printf("Sin%.2f = %.3f",x,sinx);
    return 0;
}