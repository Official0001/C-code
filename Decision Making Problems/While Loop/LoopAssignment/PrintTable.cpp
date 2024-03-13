#include<stdio.h>
int main()
{ 
	int i=1,n,sum=0;
	
	printf("Enter Table : ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		
		sum= n * i;
		printf("%d * %d = %d\n",n,i,sum);
		i++;
	}

	return 0;
}
