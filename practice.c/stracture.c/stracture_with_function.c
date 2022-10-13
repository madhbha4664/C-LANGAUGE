#include<stdio.h>

struct function 
{
	int x;
	char r[20];
	float m;



};
int getstracture(struct function f)
 {   
 	scanf("%d\n%s\n%f",&f.x,&f.r,&f.m);
	printf("%d\n%s\n%f",f.x,f.r,f.m);
 }	
	

int main()
{
	 struct function p;
	 
	 getstracture(p);
	
	
	
	
	
}
