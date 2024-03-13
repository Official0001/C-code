#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter Limit : ");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==1)
			sum=sum+i;
			i++;
	}
	printf("Sum of Even Number is: %d",sum);
	
	return 0;
	
}
