#include <stdio.h>
int main ()
{
     int a,b ;
     float c ;
     a=7;
     b=2;
     c = a+b;
     printf("Sum of %d and %d is %.2f\n", a,b,c);
     c =a*b ;
     printf("Product of %d and %d is %.2f\n", a,b,c);
     c=a/b ;
     printf("Integer Division of %d by %d is %.2f\n",a,b,c);
     c=(float)a/b;
     printf("Real Division of %d by %d is %.2f\n",a,b,c);
     return 0 ;
}


Output-
Sum of 7 and 2 is 9.00
Product of 7 and 2 is 14.00
Integer Division of 7 by 2 is 3.00
Real Division of 7 by 2 is 3.50