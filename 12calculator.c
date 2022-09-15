#include<stdio.h>
int main ()
{

int num1num2;
char madhbha;

printf("enter your choice (+,-,*,/)");
scanf("%c",&madhbha);

printf("enter any two numbers");
scanf("%d%d",&num1,&num2);
switch (madhbha)
{

case '+': printf("num1 = %d\nnum2 = %d\n\nnum1+num2 = %d",num1,num2,num1+num2);
break;

case '-': printf("num1 = %d\nnum2 = %d\n\nnum1-num2 = %d",num1,num2,num1-num2);
break;

case '*': printf("num1 = %d\nnum2 = %d\n\nnum1*num2 = %d",num1,num2,num1*num2);
break;

case '/': printf("num1 = %d\nnum2 = %d\n\nnum1/num2 = %d",num1,num2,num1/num2);
break;


default :
printf("...invalid choice....!");

}

return 0;
}