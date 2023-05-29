#include<stdio.h>
int main()
{
   int a=32767;
   long int b=2147483647;
   long long int c=9223372036854775807;
   long double d = 1.1E+49;

   printf("The long int value: %ld\n",b);
   printf("The long long int value: %lld\n",c);
   printf("The long double value: %.1LE\n",d);
   printf("The short int value: %d\n",a);
   
return 0;
}