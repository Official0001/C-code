#include<stdio.h>
int main(){
	
	int *ptr;
//	int arr[]={2,4,3,5,6};
    int arr[5];
	ptr = &arr[0];
	for(int i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
			
	}
	
	for(int i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
		//ptr++;	
	}
	
	return 0;
}
