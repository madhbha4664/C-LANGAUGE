#include<stdio.h>
int main()
{
	int n,sum=0;
	
	printf("enter any number\n");
	scanf("%d",&n);
	
	int m=1;
	
	while(m<=n) 
	{
		sum = sum +m;
		printf("%d\n",m);
		
		m++;
	}
	
	printf("Total number sum of = %d",sum);
	return 0;
}