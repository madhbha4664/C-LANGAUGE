#include<stdio.h>
int main()
{
	char lucky;
	float vraj,rudra;
	
	printf("enter any characters do you (+,-,*,/)");
	scanf("%c",&lucky);
	
	printf("enter any two numbers");
	scanf("%f%f",&vraj,&rudra);
	
	switch (lucky)
	{
	
	case'+' : printf("your sum : %.2f + %.2f = %.2f ",vraj,rudra,vraj+rudra);	
	break;
	
	case'-' : printf("your sum : %.2f - %.2f = %.2f ",vraj,rudra,vraj-rudra);	
	break;
	
	case'*' : printf("your sum : %.2f * %.2f = %.2f ",vraj,rudra,vraj*rudra);	
	break;
	
	case'/' : printf("your sum : %.2f / %.2f = %.2f ",vraj,rudra,vraj/rudra);	
	break;
	
	
	default :  
	printf("invalid charactor....!");
	
}
	return 0;
}