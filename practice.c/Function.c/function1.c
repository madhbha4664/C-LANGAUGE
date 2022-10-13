#include<stdio.h>

int test(int m)
{
	printf("%d\n",m);

	return m;
	
}

int main ()
{
	int r;
	printf("enter num:- ");
	scanf("%d",&r);
	r=test(r);
	r=test(1);
	r=test(-);
	return 0;
}
