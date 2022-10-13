#include<stdio.h>
int main()
 
{
	
	FILE *f1;
	char a[50];
	
f1 = fopen("roi.txt","a");
	printf("Enter data:\n");
	scanf("%s",&a);
	fprintf(f1,"%s",a);
	
	
	return 0;
}