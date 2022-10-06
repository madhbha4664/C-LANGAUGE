#include<stdio.h>

int recurse(int x)
{

	if(x<=50)
	{
	  printf("%d\n",x);
	  recurse(x+2);
	}
		
}
	
	int main()
{
		
		recurse(1);
		
		
	
	
	

	
	return 0;
	
}

