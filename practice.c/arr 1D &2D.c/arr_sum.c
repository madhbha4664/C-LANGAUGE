#include<stdio.h>
int main()
{
	int m[5] = {11,22,33,44,55};
	
	int r=0,x;
	
	for(x=0;x<=4;x++)
	{
		
		r = r+m[x];
		
	}
	
	printf("Total = %d",r);
	
	
	
	return 0;
}