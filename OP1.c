#include <cs50.h>
#include<stdio.h>
int main()
{
  int a = get_int("Enter a:");
  int b = get_int ("Enter b:");
  printf("\n SUM=%d",a+b);
  printf("\n DIFFERENCE=%d",a-b);
  printf("\n PRODUCT =%d",a*b);
   printf("\n QUOTIENT= %d ",a/b);
   printf("\n REMINDER=%d",a%b);

   return 0;
}
