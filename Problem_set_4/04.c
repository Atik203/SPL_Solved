#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   float x;
   float sum=0.0;
   for(int i=1;i<=n;i++)
   {
    scanf("%f",&x);
    sum=sum+x;
   }

   printf("AVG of %d inputs: %f",n,sum/n);

return 0;
}