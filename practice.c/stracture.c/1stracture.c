#include<stdio.h>

struct problem
{
	char name[50],cityname[20];
	int no;
	
	
	
};

int main()
{
	struct problem m;
	
   scanf("%s\n%d\n%s",&m.name,&m.no,&m.cityname);
   printf("\n\n%s\n%d\n%s",m.name,m.no,m.cityname);
	
	
	
	
	
}