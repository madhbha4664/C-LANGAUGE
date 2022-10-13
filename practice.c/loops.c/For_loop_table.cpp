
#include<stdio.h>
int main()

{
	int num,m;
	printf("enter any number");
	scanf("%d",&num);
	
for(m=1;m<=10;m++)
	{
		printf("%d X %d = %d\n",num,m,m*num);
	}
	
	
	return 0;
}