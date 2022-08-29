#include<stdio.h>
   int main()
  {  
    int phy,chem,maths,total,total1;
    printf("welcome to largest university of  Gujarat....\n");
	printf("please enter your Marks..\n");
	printf("enter your physics = ");
	scanf("%d",&phy);
    
    printf("enter your chemistry = ");
	scanf("%d",&chem);
    	
    printf("enter your mathesmatics = ");
	scanf("%d",&maths);
	
	printf("\nphy = %d\nchem = %d\nmaths = %d",phy,chem,maths);	
    total=phy+chem+maths;  
    printf("\nyour three subject total marks = %d",total);
    total1=phy+maths;
    printf("\nyour phy and maths marks total = %d",total1);
   
    if(phy>=55&&chem>=50&&maths>=65&&total>=190&&total1>=140)
    
    {
    printf("\n....Congratulation....you are eligible to admission");
    	
	}
	else
    {
    printf("\n...Sorry...! you are not eligible to admission..\nBATTER LUCK NEXT TIME...");
	}    
	
	return 0;
}
