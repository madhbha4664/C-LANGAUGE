#include<stdio.h>
int main()
{

 int choice;
 
printf("Enter any number to get day\n\n");
 scanf("%d",&choice);

switch(choice)
{
	
	case 1:
		
		printf("First day is Monday");
		
	break;	
	
	case 2:
		
		printf("Second day is Tuesday");
		
	break;
	
	case 3:
		
		printf("Third day is wedensday");
		
	break;
	
	case 4:
		
		printf("Fourth day is Thirshday");
		
	break;
	
	case 5:
		
		printf("fifth day is Friday");
		
	break;
	
	case 6:
		
		printf("Six day is Saturday");
		
	break;
	
	case 7:
		
		printf(" Sunday is Holiday ");
		
	break;


	default :
		{
			printf("ples Enter Currect Number");
			
		}
}







return 0;
}