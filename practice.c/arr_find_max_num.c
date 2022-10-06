#include<stdio.h>
int main()
{
	int num[5] = {55,110,15,20,25};
	
	int m , max = num[0]  ;
	
	
	for(m=0;m<5;m++)
	
	{
		if(max<num[m])
		{
			
			max = num[m];
		}
		
	}
	printf("max number is = %d  ",max);
	
	
	return 0;
} 