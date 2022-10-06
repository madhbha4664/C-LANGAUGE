#include<stdio.h>
int main()
{
	int m[2][2],r[2][2],raw,col;
	
	printf("Enter first Arr elements\n");
	
	for(raw=0;raw<2;raw++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&m[raw][col]);
		}
	}
	
	
	printf("\nYour first Arr elements\n");
	
	for(raw=0;raw<2;raw++)
	{
		for(col=0;col<2;col++)
		{
			
			printf("%d ",m[raw][col]);
		}
		printf("\n");
	}
	
	printf("\nEnter second Arr elements\n");
	
	for(raw=0;raw<2;raw++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&r[raw][col]);
		}
		
	}
	
	printf("\nYour Second Arr elements\n");
	
	
	for(raw=0;raw<2;raw++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",r[raw][col]);
		}
		printf("\n");
	}
	
	printf("sum of 2 Arr\n");
	
	for(raw=0;raw<2;raw++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d",m[raw][col]+r[raw][col]);
		}
		printf("\n");
	}
	
	return 0;
}