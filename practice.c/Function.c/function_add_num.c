#include<stdio.h>
int sum(int a,int b)
{
	
	int sum;
	sum=a+b;
	printf("sum=%d+%d=%d",a,b,sum);
	
	
}


int main()
{
   int a,b;

	printf("enter any two value..:");
	
	scanf("%d%d",&a,&b);
	sum( a, b);
	return 0;
}




