#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int reverse_num=0;
   while(n>0)
   {
      int a=n%10;
      reverse_num=reverse_num*10+a;
      n=n/10;
      
   }
   printf("%d",reverse_num);

return 0;
}