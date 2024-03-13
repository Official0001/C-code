#include<stdio.h>
int main()
{int n,i=1;
	
	printf("Enter Number");
	scanf("%d",&n);
	
	//i=1;
	while(i<=n)
	{
		if(i%2==0)
		printf("%d\n",i);
		i++;
	}
	
	
	
	return 0;
}
