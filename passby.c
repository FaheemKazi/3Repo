#include <stdio.h>
#include<conio.h>

 int main()
 {
 int i=10,j=11;
 printf ("value of i  = %d\n",  i);
 printf ("value of j  = %d\n",  j);
 int sum=0;
 sum=add(i,j);
 printf("%d,%d,%d",sum,i,j);
 return 0;
 }
int add(int x,int y){
      x=20;
      printf ("value of x  = %d\n",  x);
      y=21;
printf ("value of y  = %d\n",  y);
     return x+y;
 }

