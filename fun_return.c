#include<stdio.h>
int value(int x,int y)
{
	printf("%d%d",x,y);
	
	return 15;
}
int main()
{   int a,b;
	printf("enter any number");
a	scanf("%d%d",&a,&b);
	value(a,b);
	
	return 0;
}