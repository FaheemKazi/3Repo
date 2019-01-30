#include <stdio.h>
int main ()
{
 int sum = 0, i = 1;
 do
  {
   sum = sum+i;
   i++;
  }while(i <= 5);
 printf("sum of first 5 natural numbers = %d",sum);
 return 0;
}
