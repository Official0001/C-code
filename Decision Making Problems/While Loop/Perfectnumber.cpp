#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter Number");
	scanf("%d",&n);
	
	int i=1;
	while(i < n)
	{ 
    	if(n%i==0){
    		sum=sum+i;
		}
    	i++;
	}
	if(sum==n)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
	
	return 0;
}
