#include<stdio.h>
int main()
{
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i%2==0){
				if(j==1 || j==5)
				printf("*\t");
				else
				printf(" \t");
			}
			else
			printf("*\t");
		}
		printf("\n\n");
	}
	
	
	return 0;
}
