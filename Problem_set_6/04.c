#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int c=1;
   int s=n-1;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=s;j++)
    {
      printf("_");
    }
    for (int j = 1; j<=c; j++)
    {
        printf("%d",c);
    }
    s--;
    c++;
    printf("\n");
   }
return 0;
}