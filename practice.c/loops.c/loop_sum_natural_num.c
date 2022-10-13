#include<stdio.h>
int main()
{
	int r,sum=0,n;
   
   printf("enter any number to get series");
   scanf("%d",&n); 
 	
	for(r=1;r<=n;r++)
	{  
      sum = sum + r;
   	 printf("%d\n",r);
		
	}
	
	printf("\nYour Total Number sum of = %d",sum);
	
	return 0;
}