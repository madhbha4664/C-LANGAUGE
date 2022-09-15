#include<stdio.h>
int main()
{
	int m,result=0,rem;
	
	printf("enter any number  ");
	scanf("%d",&m);
	while(m!=0)
	{
	rem=m%10;    
	result=(result*10)+rem; 
	m = m/10;
}
printf("%d",result);

	return 0;
}