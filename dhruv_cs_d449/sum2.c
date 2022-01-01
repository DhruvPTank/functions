#include <stdio.h>
void sum2(int a,int b);
void main()
{ int a,b;

   printf ("enter two numbers\n");
   scanf ("%d\n%d",&a,&b);

   sum2(a,b);
}
void sum2(int a,int b)
{
   int sum = a+b;
   printf ("sum=%d" , sum);
}
