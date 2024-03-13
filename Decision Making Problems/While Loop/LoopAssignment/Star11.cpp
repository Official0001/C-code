#include<stdio.h>
int main()
{
	int i,j,a;

	for(i=1; i<=5; i++){
		a=1;
		for(j=1; j<=i; j++){
			if(j==1 || i==j ||i==5)
			printf("%d ",a++);
			else{
				a++;
					printf("  ");
			}
		
	
		}
		printf("\n");
	}
	
	
	return 0;
}
