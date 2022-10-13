#include<stdio.h>
int main()
{
   int rollno[10];
   char name[20];	
  
   int a[100];
   
   
   
   
   printf("please Enter Your Details..\n");
   printf("Enter Your Roll no = ");
   gets(rollno);
   printf("\nEnter Your Name = ");
   gets(name);
   printf("Enter your three Subjects marks(guj,eng,s.k):\n");
   
   for(int i=0;i<3;i++)
   {
   	scanf("%d",&a[i]);
   	
   }
   
  
     printf("\nGujarati = %d",a[0]);
     printf("\nEnglish = %d",a[1]);
     printf("\nSanskrit = %d",a[2]);
   
   
   
	return 0;
}

