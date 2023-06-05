#include<stdio.h>
int main()
{
   int x,n;
   scanf("%d",&x);
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    }
  int choice=n-1;
  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
        printf("Right, Player-2 wins\n");
        break;
    }
    else
    {
        
         if (choice >0 )
         {
            printf("Wrong, %d Choice(s) Left!\n",choice);
            choice--;
         }
         else
         {
            printf("Player-1 wins!");
            break;
         }
    }
  }

return 0;
}