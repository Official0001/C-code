#include<stdio.h>
int main()
{
	int n,flag=0;
	printf("Enter Any Number");
	scanf("%d",&n);
	int i=2;
	while(i<=n-1)   
	{
		if(n%i==0)  
		{
			flag=1;
			break;	
		}
	//	i++;
	}
	if(flag)
	{
		printf("\nThe No is not the Prime");
	}
	else 
	{
		printf("\nThe No is Prime");
	}
	return 0;
}
