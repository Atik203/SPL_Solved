#include<stdio.h>
#include<math.h>
int main()
{
   int m=sqrt(9);
   int a[m][m];
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<m;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }


return 0;
}