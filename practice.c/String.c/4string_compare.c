#include<stdio.h>
#include<string.h>
void main()
{
	char r[100],m[50];
	
	puts("Enter Any String...");
	printf("Input the 1st string : ");
	gets(r);
	printf("Input the 2st string : ");
    gets(m);
    
    if(strcmp(r,m)!=0)
    {
    	printf("Strings are not equal.");    	
	}
	
	
	else
	{
		printf("Strings are  equal.");
	}
		
	
	
	
	
	
}