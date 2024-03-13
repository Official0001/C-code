#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	
	printf("Enter Limit : ");
	scanf("%d",&n);
	
	while(i<=n)
	{	
	if(i%2==0)
		sum=sum+i;
		i++;
	}
	printf("Sum of Even Numbers is : %d",sum);
	
	return 0;
}
