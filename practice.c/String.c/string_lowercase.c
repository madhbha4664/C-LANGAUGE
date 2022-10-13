#include<stdio.h>
int main()
{
	
	char stringlower[100];
	
	puts("Enter Any Words\n");
	gets(stringlower);
	puts(stringlower);
	
	strlwr(stringlower);
	printf("String Lowercase is = %s",strlwr(stringlower));
	
	strupr(stringlower);
	printf("\nString uppercase is = %s",strupr(stringlower));
	;
	return 0;
}