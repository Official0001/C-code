#include<stdio.h>
int main()
{
	int arr[5],len,max=0,min=arr[0]; 
	
	len = sizeof arr / sizeof arr[0];
	
	printf("Enter Element In Array");
	for(int i=0; i<len; i++ )
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<len; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		
		if(min>arr[i])
		{
			min=arr[i];
		}
		
		
	}
	printf("Max %d\n",max);
	printf("min %d",min);

	
	return 0;
}
