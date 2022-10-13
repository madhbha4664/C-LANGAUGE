#include<stdio.h>
int main()
{
	char string[100];

	puts("enter Any value\n");
	gets(string);
	puts(string);
	
	strupr(string);
	
	printf("string Uppercase is = %s",strupr(string));
	
	
	
	
	
	return 0;
}