#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int first=1;
   for(int i=1;i<=n;i++)
   {
    if(i%2==1)
    {
    printf("%d ",first);
    }
    else
    {
        printf("%d ",first-1);
    }
    
   }
return 0;
}