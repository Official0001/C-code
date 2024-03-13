#include<stdio.h>
int main()
{
	 int a=64,b=0;
	 
	 
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
				if(i==1 || i==3 || i==5){
				b++;
				printf("%d\t",b);
			}
			else
			{
					a++;
			printf("%c\t",a);
			}
		

		}
		printf("\n");
	}
	
	return 0;
}
