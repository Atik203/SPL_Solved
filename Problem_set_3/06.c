#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   if(a==0)
   {
    printf("Zero is not a valid input");
    return 0;
   }
   else if(a<0)
   {
    printf("Negative input is not valid");
    return 0;
   }
   else
   {
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
        }
        else
        {
            printf("No");
            return 0;
        }
    }
   }
printf("Yes");

return 0;
}