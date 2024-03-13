#include<stdio.h>
int main()
{
	int a[5],len,temp=0,mid,end;
	len = sizeof(a)/sizeof a[0];
	
	printf("Enter 5 Element : ");
	for(int i=0; i<len; i++)
	{
		scanf("%d\n",&a[i]);
	}
	
	printf("Before Reverse Array : \n");
	for(int i=0; i<len; i++)
	{
		printf("%d\n",a[i]);
	}
	
	mid=len/2;
	end=len-1;
	
	for(int i=0; i<mid; i++)
	{
		temp = a[i];
		a[i] = a[len-1];
		a[len-1] = temp;
		(len-1)--;
	}
	printf("After Reverse Array : \n");
	for(int i=0; i<len; i++){
		printf("%d\n",a[i]);
	}
	
	
	
	
	
	return 0;
}
