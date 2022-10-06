#include<stdio.h>
int main()
{
	int n,m,size;

    int arr[] = {7,5,45,55,54,31,25,10,19,03};
	size=sizeof(arr)/sizeof(arr[0]);
	for(m=0;m<size;m++)
	{
		
		printf("position of arr[%d] ==> your arr %d\n",m,arr[m]);
		
	}
	
//printf("%d",size);
	return 0;
}