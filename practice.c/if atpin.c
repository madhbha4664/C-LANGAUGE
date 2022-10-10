#include<stdio.h>
int main()
{
	int atmpin=4664,a=40000,b=150000;
	
   
	printf("please enter your Atmpin    ");
    scanf("%d",&atmpin);
    
	if(atmpin==4664)	
    {
	printf("...welcome Madhbha...\n");
    printf("what are you doing\n");   //printf("");
	printf("please read and press doing number\n\n"); 
    printf("check bank belance press => a\n");
	printf("check statement press => b\n");
	if(a==40000)
{
    scanf("%d,&a");
	printf("%d=a",a);
}
    else if(b==150000)
    
    {
    	scanf("%d,&b");
	    printf("%d=b",b);	
	}
   

  /* 
	printf("your bank belance is = %d",a);

	printf("\nyour statement is = %d",b);*/
    

}
    else
	{
	  printf("your Atmpin is incurrect\nplese enter currect pin number");
    
}

	return 0;
}
