#include<stdio.h>
int main()
{
	char lucky;
	int vraj,rudra,vinod;
	do{
	printf("\n\nenter any characters...(+,-,*,/) ");
	scanf("%s",&lucky);
	
	
	printf("enter any two numbers");
	scanf("%d%d",&vraj,&rudra);
	switch (lucky)
	{
	
	case'+' : printf("your sum : %d + %d = %d ",vraj,rudra,vraj+rudra);	
	break;
	
	case'-' : printf("your sum : %d - %d = %d ",vraj,rudra,vraj-rudra);	
	break;
	
	case'*' : printf("your sum : %d * %d = %d ",vraj,rudra,vraj*rudra);	
	break;
	
	case'/' : printf("your sum : %d / %d = %d ",vraj,rudra,vraj/rudra);	
	break;
	
	
	default :  
	printf("invalid charactor....!");
	
}

printf("\ndo you want to countinue press = ");
scanf("%d",&vinod);
}
while(vinod==1);


	return 0;
}