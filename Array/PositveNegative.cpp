#include<stdio.h>
int main()
{
	int a[5],i,len,sum=0,flag=0;
	len = sizeof(a)/sizeof(a[0]);
	
	printf("\nEnter 5 values in array\n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nDisplay array values\n");
	for(int i=0; i<len; i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("\nPositive Numbers : \n");
	for(int i=0; i<len; i++)
	{
		if(a[i]>0)
		printf("%d\n",a[i]);
		
	}
	
	printf("\nNegative Numbers : \n");
	for(int i=0; i<len; i++)
	{
		if(a[i]<0)
		printf("%d\n",a[i]);
	}

	return 0;
}
