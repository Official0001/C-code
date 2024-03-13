#include<stdio.h>
int main()
{
	int a;
	for(int i=1; i<=5; i++)
	{   a=1;
		for(int j=1; j<=5; j++)
		{
			if(j<6-i){
				a++;
			printf("%d",a);
			}
			
			else
			printf("* ");
			
		}
		printf("\n");
	}
	
	
	return 0;
}
