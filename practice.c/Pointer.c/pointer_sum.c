#include<stdio.h>
void main()
{
	int num1,num2,*pno1,*pno2,sum;
	char choice;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	printf("\nEnter second Number : ");
	scanf("%d",&num2);
	
	pno1= &num1;
	pno2= &num2;
	
		
	sum =*pno1+*pno2;
printf("The sum of the entered numbers is : %d",sum);
	
    
 	 
}