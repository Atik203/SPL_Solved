#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int s=n-2;
   int k=1;
   for(int i=1;i<=n;i++)
   {
    if(i==(n+1)/2)
    {
        for(int j=1;j<=n;j++)
        {
            printf("H");
        }
    }
    else
    {
     for(int j=1;j<=k;j++)
     {
      printf("H");
     }
    for(int j=1;j<=s;j++)
     {
      printf(" ");
     }
     for(int j=1;j<=k;j++)
     {
       printf("H");
     }
    }

  printf("\n");
  
   }
return 0;
}