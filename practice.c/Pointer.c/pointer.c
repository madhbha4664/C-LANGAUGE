#include<stdio.h>
int main()
{
	int m=31,*r,**l;
	r=&m;
	l=&r;
	
	printf("%d\n",m);
	printf("%d\n",r);
	printf("%d\n",*r);
	printf("%d\n",l);
	printf("%d\n",*l);
	printf("%d",**l);
	return 0;
}