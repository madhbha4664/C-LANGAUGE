#include<stdio.h>
int main()
{
    int arr[] = {5,15,25,22,5};
    int size,x,y;
    printf("%d  %d",sizeof(arr),sizeof(arr[0]));
	
	size=sizeof(arr)/sizeof(arr[0]);
    printf("\n%d",size);
	
	for(x=0;x<size;x++)
	{
		
		printf("\narr[%d] = %d\n",x,arr[x]);
	}
	
	
	return 0;	
}