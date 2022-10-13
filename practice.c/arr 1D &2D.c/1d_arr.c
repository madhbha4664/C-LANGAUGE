#include<stdio.h>
int main()
{
	
	
	int x,n;
	printf("Enter Number to get arr");
	scanf("%d",&n);
	int m[n];
	
	for(x=0;x<n;x++)
	{
		scanf("%d",&m[x]);
	}
	
	for(x=0;x<n;x++)
	{
		printf("%d",m[x]);
	}
	
	
	return 0;
}