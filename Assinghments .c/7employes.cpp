#include<stdio.h>
int main ()
{

 int id,hour;
 float salary,sum;
 printf("enter employer id...");
 scanf("%d",&id);
   
    printf("enter your salary..");
    scanf("%f",&salary);
    printf("enter your working hour..");
    scanf("%d",&hour);
  	
 	sum=hour*salary;
 	printf("\nEmployees ID = %d",id);
 	printf("\nyour salary is : %d*%.2f\nSalary = U$ %.2f",hour,salary,sum);
 		 
 

return 0;

}
