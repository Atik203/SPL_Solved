#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
  int c=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=c;j++)
    {
        printf("%d",i+j-1);
    }
    c++;
    printf("\n");
  }

return 0;
}