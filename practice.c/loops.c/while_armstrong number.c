#include<stdio.h>
int main ()
{
	int x,lucky,rem,result;
	printf("enter any number:- ");
    scanf("%d",&x);
	lucky=x;
	while(x!=0)
	{
	
	rem=x%10;
	result=result+rem*rem*rem;
	x=x/10;
		
    }
    if(lucky==result)
    {
	printf("this number is armstrong...!");
    }
    
    else{
    	printf("this number is not armstrong...!");
	}
	return 0;
}