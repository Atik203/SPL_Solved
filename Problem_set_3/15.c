#include<stdio.h>
int main()
{
   int x,n1,n2,n3;
   scanf("%d",&x);
   scanf("%d %d %d",&n1,&n2,&n3);
 
   if(x==n1)
   {
     printf("Right, Player-2 wins!\n");
   }
  else if(x==n2)
   {
    printf("Wrong, 2 Chance(s) Left!\n");
    printf("Right, Player-2 wins!\n");
   }
   else if(x==n3)
   {
     printf("Wrong, 2 Chance(s) Left!\n");
     printf("Wrong, 1 Chance(s) Left!\n");
     printf("Right, Player-2 wins!\n");
   }
   else
   {
    printf("Wrong, 2 Chance(s) Left!\n");
    printf("Wrong, 1 Chance(s) Left!\n");
    printf("Wrong, 0 Chance(s) Left!\n");
    printf("Player-1 wins!\n");
   }
   
return 0;
}