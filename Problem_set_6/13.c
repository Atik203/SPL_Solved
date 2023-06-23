#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int c=1;
   int s;
   if(n%2==0) s=n+1;
   else s=n;

   for(int i=1;i<=n;i++)
   {
    if(i==n)
    {
     for(int j=1;j<=n;j++)
     {
        printf("%d",j);
     }
     for(int j=n-1;j>=1;j--)
     {
        printf("%d",j);
     }
    }
    else
    {
     for(int j=1;j<=c;j++)
     {
      printf("%d",j);
     }
     for(int j=1;j<=s;j++)
     {
        printf("_");
     }
     for(int j=c;j>=1;j--)
     {
         printf("%d",j);
     }
     c++;
     s-=2;
    }
    printf("\n");
   }

return 0;
}