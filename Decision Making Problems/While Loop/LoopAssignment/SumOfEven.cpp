#include<stdio.h>
int main()
{ 
	int i=1,n,sum=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0)
			sum=sum+i;
		
		i++;
	}
	printf("Sum Of Even Number Between 1 to %d = %d\n",n,sum);	
	return 0;
}
