#include<stdio.h>
int main()
{
	
	int a=44,b=125,c=7;
	char lucky;
//	printf("please enter a any number");
//	scanf("%c",&a,&b);
    lucky = (a>b) ? a : b ;
	printf("big number is = %d",lucky);
	
	lucky = (a>b) ? (a>c) ? a  :c          :         (b>c)  ? b :c ;
	printf("%d",lucky);




/*
	int a=4,b=8,c=56,res;
	
	res = (a>b) ? a : b ;	
	printf("max num is = %d",res);

   // res = 	(a>b) ? (a>c) : a,b ;                //   :    (b>c) ? b : c  ;
	
//	printf("%d",res);              
	
	*/
	
	return 0;
}

