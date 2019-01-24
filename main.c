#include<stdio.h>

int main()
{
   int a, b;

   printf("Enter two numbers to add\n");
   scanf("%d%d", &a, &b);

   a = a + b;

   printf("Sum of the numbers = %d\n", a);
   if (a>0)
   {
       printf("Sum of two no is greater then zero");
   }
   else
       printf("sum of two no is less then zero or equal to zero");

   return 0 ;
}



//#include <stdio.h>
//
//int main()
//{
//    int a=2, b=3;
//    a=a+b;
//    printf(" Sum of two number 2+3 is");
//    printf("Enter two numbers to add\n");
//    if (a > 0){
//        printf("value of a two number is greater then zero");
//    }
//     else
//        printf(" Value of two no. is  less then zero");
//    return 0;
//  }

