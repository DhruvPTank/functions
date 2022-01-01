#include<stdio.h>
void calculate(int,int);
int sum(int,int);
void add();
int addition()
{
	//printf("Function Called");
	int a,b;
	printf("ENter a & b:");
	scanf("%d%d",&a,&b);
	int c =a+b;
	return c;
}
void main()
{
	add();
	//calculate(a,b);
	//int i = sum(a,b);
	//printf("Call a Function");
	//int i = addition();

	//printf("\n%d",i);
	//printf("void main end");
}
void add()
{
	int a,b;
	printf("ENter a & b:");
	scanf("%d%d",&a,&b);
	int c =a+b;
	printf("\n%d",c);
}

void calculate(int x,int y)
{
	printf("x= %d, y=%d",x,y);
	int c=x+y;
	printf("\n%d",c);
}

int sum(int x,int y)
{
	int c =x+y;
	return c;
}




