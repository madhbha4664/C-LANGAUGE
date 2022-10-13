#include<stdio.h>
#include<string.h>
int main()
{
	char m[50],r[50];
	
	puts("Enter Any Words");
	gets(m);
	gets(r);
//	puts(m);
//	puts(r);
	
	
	if(strcmp(m,r)==0)
	{
		printf("This Comparision is Equal...");
	}
	
	else
	{
		printf("This Comparision is NOT Equal...");
	}
	
	return 0;
}