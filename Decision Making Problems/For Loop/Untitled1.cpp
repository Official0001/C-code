#include<stdio.h>
int main()
{
	int i,j,a=1,b=65;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
		
			if(j<=i)
			{
				if(i==2 || i==4){
					printf("%d",a);
					a++;
				}
				else{
					printf("%c",b);
					b++;
				}
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}
