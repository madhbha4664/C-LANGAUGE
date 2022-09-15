#include<stdio.h>
int maxnum(int num1,int num2,int num3)
{

  int max;
  max=(num1>num2) ? (num1>num3) ? num1:num3 : (num2>num3) ? num2:num3 ;
  
  printf("max number is = %d",max);
}
  int main()
  {int a,b,c;
  	printf("enter any 3 numbers");
  	scanf("%d%d%d",&a,&b,&c);
  	maxnum(a,b,c);
  }


