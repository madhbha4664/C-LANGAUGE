#include<stdio.h>
int main()
{
	int m[60],r[60];
	int  p;
	
	printf("Enter First Arr\n");
	for(p=0;p<3;p++)
	{
		
		scanf("%d",&m[p]);
	}
	
	
	printf("Your First Arr\n");
	
	
	for(p=0;p<3;p++)
	{
		
		printf("%d ",m[p]);
	}
	
	printf("\nEnter second Arr\n");
	
	for(p=0;p<3;p++)
	{
		
		scanf("%d",&r[p]);
	}
	
	printf("Your Second Arr\n");
	
	for(p=0;p<3;p++)
	{
		
		printf("%d ",r[p]);
	}
	
	
	printf("\nYour sum Arr\n");
		printf("\n sum = ");

	for(p=0;p<3;p++)
	{
		
		printf("%d ",m[p]+r[p]);
	}
	return 0;
}
