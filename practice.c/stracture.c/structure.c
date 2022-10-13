#include<stdio.h>

struct practice
{
	int rollno;
	int mobile_no;
	char name[50];
	char gmail[50];
	
		
};

int main()
{
	char m[35];
 
   
	
	printf(".....Please Enter Your Personal Details....");
	
	struct practice p;
	
	char arr[20];
	
	
	printf("\n\n\nPlease Enter Your Rollno : ");
	scanf("%d",&p.rollno);
	printf("\nPlease Enter Your Name :");
	scanf("%s",&p.name);
	printf("\nPlease Enter Your contact Number :");
	scanf("%d",&p.mobile_no);
	printf("\nPlease Enter Your Gmail :");
	scanf("%s",&p.gmail);
	
	printf("\nPlease Verify Your Details..");

    printf("\n\nROLL NO    ==> %d",p.rollno);
    printf("\nNAME       ==> %s",p.name);
	printf("\nMOBILE NO  ==> %d",p.mobile_no);
	printf("\nGMAIL      ==> %s",p.gmail);
  
    printf("\n\nYour Details Are Currect Then press Yes And Submitted Data : Yes & No  ");
    scanf("%s",&m);
    
   
    
  if(strcmp(m,"yes")==0)
   {
   	
   	printf("Your Details Are Submitted");
   }
  else
   {
   printf("Your Details Are NOT Submitted");
   }
 

}