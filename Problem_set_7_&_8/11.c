#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n][n];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
    int sum=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(i%2==1)
        {
            sum+=a[i][j];
        }
        else if(j%2==1 && i%2 != 1)
        {
          sum+=a[i][j];
        }
    }
   }
printf("%d",sum);
return 0;
}