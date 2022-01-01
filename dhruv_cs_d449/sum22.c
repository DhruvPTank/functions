#include <stdio.h>
int sum2(int,int);
void  main()
{ 
   int a,b;

   printf ("enter two numbers\n");
   scanf ("%d\n%d",&a,&b);

   sum2(a,b);
}
int  sum2(int a,int b)
{
   int sum = a+b;
   printf ("sum=%d" , sum);

   return sum;
}
