#include<stdio.h>
int main()
{     //Prime number 1 to n
	int num,n,i,flag,sum=1;
	
	printf("Enter Range : ");
	scanf("%d",&num);
	
	for(n=2; n<=num; n++)
	{
		flag=1;
		
		for(i=2; i<=n/2; i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1){
		sum= sum * n;
		}
	
	}
	printf("sum = %d",sum);
	
	
	return 0;
}
