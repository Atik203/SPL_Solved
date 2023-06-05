#include <stdio.h>

int main()
{
   int x, y;
   scanf("%d %d", &x, &y);

   if (x < y)
   {
      while (x < y)
      {
         printf("%d ", x * x);
         x++;
      }
      printf("Reached!");
   }
   else if (x > y)
   {
      while (x > y)
      {
         printf("%d ", x * x);
         x--;
      }
      printf("Reached!");
   }
   else
   {
      printf("Reached!");
   }

   return 0;
}
