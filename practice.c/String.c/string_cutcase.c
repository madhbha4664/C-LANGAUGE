#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50],c[50];
	
	puts("Enter Any Words");
	gets(a);
	gets(b);
	gets(c);
	puts(a);
	puts(b);
	puts(c);
	
	strcat(b,c);
	printf("String Cut = %s  ",b );
	
	
	
	
	
	return 0;
}