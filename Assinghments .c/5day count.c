#include<stdio.h>
int main()
{
	int day,year,week,days,remind,lucky;
	printf("enter numbers of day");
	scanf("%d",& day);
	printf("your selected day = %d",day);
	 
	year = day/365;
	week = day%365/7;
	days = day%365%7;
	printf("\ntotal year = %d",year);    
	printf("\ntotal week = %d",week);    
    printf("\ntotal day = %d",days);	
		
	return 0;
}
