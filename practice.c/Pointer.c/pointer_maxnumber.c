#include<stdio.h>
void main()
{
	int fn,sn,*pfn=&fn,*psn=&sn;
	
	printf("enter first number :");
	scanf("%d",&fn);
	printf("\nenter second number :");
	scanf("%d",&sn);
	
	
	if(*pfn>*psn)
    {
    	printf("The Maxnumber Is = %d",*pfn);
	}
	else
	{
		printf("The Maxnumber Is = %d",*psn);
	}
	
	
	
	
}