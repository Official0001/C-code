#include<stdio.h>
int main()
{
	int n,i=1;
	
	printf("Enter Limit : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==1)
		printf("%d\n",i);
			
		i++;
	}

	
	return 0;
}
