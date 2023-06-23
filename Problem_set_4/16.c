#include<stdio.h>
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   int gcd=1;
   
   int min=(x<y) ? x:y;
   for(int i=1;i<=min;i++)
   {
    if(x%i==0 && y%i==0)
    {
        gcd=i;
    }
   }
   int lcm = (x*y)/gcd;
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);
return 0;
}