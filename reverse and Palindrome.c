#include<stdio.h>
int main()
{
	int m,result=0,rem,madhbha;
	printf("enter any number  ");
	scanf("%d",&m);
	madhbha=m;
	while(m!=0)
	{
	rem=m%10;    
	result=(result*10)+rem; 
	m = m/10;
}

if(madhbha==result)
{
	printf("This Number is a Palindrome...! ");

}

else{
	printf("This Number is a not  Palindrome...! ");
}

	return 0;
}