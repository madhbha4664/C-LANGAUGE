/*
#include<stdio.h>
#include<string.h>
void main()
{
	char word[25];
	
	puts("Enter Any String...");
	gets(word);
	strlen(word);
	
	printf("Length of the string is : %d ",strlen(word));
	
	
}*/

//WITHOUT STRLEN.....

#include<stdio.h>
#include<string.h>
void main()
{
	char word[25];
	int m=0;
	puts("Enter Any String...\n");
	gets(word);
    
    while(word[m]!='\0')
{
	
    	m++;
}
	printf("Length of the string is : %d ",m-1);
}