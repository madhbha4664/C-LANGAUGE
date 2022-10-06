#include<stdio.h>
int main()
{

int m;


printf("enter any number");
scanf("%d",&m);
madhbha3107:
if(m<=10)
{
	printf("%d",m);
	m++;
}
goto madhbha3107;

}