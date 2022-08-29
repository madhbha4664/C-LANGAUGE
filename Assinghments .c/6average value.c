#include<stdio.h>
int main()
{
	float item1,item2,weight1,weight2,sum;
	
	
    printf("enter item1 no = ");	
	scanf("%f",&item1);
	printf("enter item1 weight = ");
	scanf("%f",&weight1);
	printf("enter item2 no = ");	
	scanf("%f",&item2);
	printf("enter item2 weight = ");
	scanf("%f",&weight2);
	
	
	sum=((item1*weight1)+(item2*weight2))/(item1+item2);
    printf("Average Value = %.2f",sum);	
    
    
	return 0;
}
