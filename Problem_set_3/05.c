#include <stdio.h>

int main() {
   int a;
   scanf("%d", &a);

   if ((a > 0) && ((a & (a - 1)) == 0)) 
   {
      printf("YES");
   } else 
   {
      printf("NO");
   }
   return 0;
}
