#include<stdio.h>
int main()
{
	int a[7],len;
	len = sizeof(a)/sizeof a[0];
	
	printf("Enter Element : \n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Display Element\n");
	for(int i=0; i<len; i++)
	{
		printf("%d  ",a[i]);
	}
	
	for(int i=0; i<len; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j; k<len; k++)
				{
					a[k]=a[k+1];
				}
				len--;
				j--;
			}
		}
	}
	
	printf("\n\nArray After Removing Duplicate Numbers \n");
	for(int i=0; i<len; i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
