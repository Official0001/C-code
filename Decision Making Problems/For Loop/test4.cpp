#include<stdio.h>
int main()
{
	int i,j,a=65,b=1;
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=5; j++){
			if(j<=i){
				if(i==2 || i==4)
				printf("%d ",b++);
				else
				printf("%c ",a++);
			}
			else
			printf("  ");
			
		}
		printf("\n");
	}
	
	return 0;
}
