#include<stdio.h>
int main()
{
	int l=31,r=7;
	/*v=l;
	l=r;
	r=v;
	*/
	
	l=l+r;//31+7=38
	r=l-r;//31-7=24
	l=l-r;//38-7==31
	printf("l = %d\nr = %d",l,r);
	
	
	
	return 0;
}
