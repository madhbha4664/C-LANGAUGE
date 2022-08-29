#include<stdio.h>
int main()

{
	int leapyear;
	
	printf("enter any year");
	scanf("%d",&leapyear);

	if(leapyear%4==0||leapyear%400==0)
	{
		printf("this year is a leap year");
		
	}
	else 
	{
	printf("this year is not leap year");
	}
	
	
	
	return 0;
}
