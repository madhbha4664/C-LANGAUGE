#include<stdio.h>
int sum(int a,int b)
{ int sum;
	printf("\n%d\n%d",a,b);
	sum=a+b;
	printf("\nsum = %d",sum);
}

int main()
{
	int x,y;
	
	printf("enter any two value");
	scanf("%d %d",&x,&y);
	sum(x,y);
	sum(15,25);
}