#include<stdio.h>
int main()
{
	int n,fact,temp,sum=0;
	
	printf("Enter Limit : ");
	scanf("%d",&n);
	
	int i,j=1;
	temp=n;
	while(n > 0)   
	{
		fact=1,i=1;
		
		int rem=n%10;
		while(i<=rem){
		fact=fact*i;
		i++;
		}
		sum=sum+fact;
		n=n/10;
	}

	if(temp==sum)
		printf("strong");
	else
		printf("not strong");
	

	return 0;
}
