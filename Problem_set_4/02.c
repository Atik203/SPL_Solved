#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int first=1;
   for(int i=1;i<=n;i++)
   {
    printf("%d ",first);
    first+=2;
   }
return 0;
}