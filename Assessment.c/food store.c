#include<stdio.h>
int pizza(int n)
{
return 180*n;
}
int burger(int n)
{
	return 100*n;
}
int dhosa(int n)
{
	return 120*n;
}
int idli(int n)
{
	return 50*n;
}


int main()
{
	int choice,x,t1=0,t2=0,t3=0,t4=0;
	char m;
	
	
	do
	{
		printf(".............MENU..............\n");
		printf("1.Pizza        price = 180rs/pcs\n");
		printf("2.burger       price = 100rs/pcs\n");
		printf("3.dhosa        price = 120rs/pcs\n");
		printf("4.idli         price = 50rs/pcs\n");
		
        printf("\nPlease Enter Your Choice....:");
		scanf("%d",&choice);
		
	switch(choice)
		{
		
		case 1:
			printf("you have selected a pizza\n");
			printf("\nplease enter quantity\n");
			scanf("%d",&x);
			printf("\npizza amount is = %d\n",pizza(x));
			t1=pizza(x);
			printf("\nTotal Amount = %d",t1);
		break;
		
		case 2:
			printf("you have selected a burger\n");
			printf("please enter quantity\n");
			scanf("%d",&x);
			printf("burger amount is = %d\n",burger(x));
            t2=t1+burger(x);
			printf("\nTotal Amount = %d",t2);
		break;
        
        
        case 3:
			printf("you have selected a dhosa\n");
			printf("please enter quantity\n");
			scanf("%d",&x);
			printf("Dhosa amount is = %d\n",dhosa(x));
            t3=t2+dhosa(x);
			printf("\nTotal Amount = %d",t3);
		break;
        
        case 4:
			printf("you have selected a idli\n");
			printf("please enter quantity\n");
			scanf("%d",&x);
			printf("dhosa amount is = %d\n",idli(x));
            t4=t3+idli(x);
			printf("\nTotal Amount = %d",t4);    
		break;
        
        
    default: 
	    printf("\n\ninvalid choice....!");
	}
	    printf("\n\ndo you want more order....? y & n...:");
	    scanf("%s",&m);	
	}
    while(m=='Y'&& m!='N'||m=='y'&& m!='n');
		

 return 0; 

}