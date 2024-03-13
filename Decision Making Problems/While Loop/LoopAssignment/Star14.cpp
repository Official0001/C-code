#include<stdio.h>
int main()
{
	int i,j,a;
	
	for(i=1; i<=5; i++)
	{
	  a=1;
		for(j=1; j<=5; j++)
		{
			if(j<=6-i ){
				printf("%d ",a);
				a++;
			}
		
			else
			printf("  ");
		}
		printf("\n");
		a+1;
	}
	
	
	return 0;
}
