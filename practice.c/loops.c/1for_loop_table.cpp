#include<stdio.h>
int main()
{
	int l,v;
	
	printf("please enter number do get table... ");
	scanf("%d",&l);
	
	for(v=1;v<=10;v++)
	{printf("%d X %d = %d\n",l,v,l*v);
	
	}
	
	return 0;
}