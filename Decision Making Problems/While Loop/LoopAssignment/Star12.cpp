#include<stdio.h>
int main()
{
	int i,j,a;
	
	for(i=1; i<=5; i++){
		a=i;
		for(j=1; j<=9; j++){
			
			if(j>=6-i && j<=4+i){
				if(j<5){
					printf("%d ",a);
					a++;
				}
//				else{
//					printf("%d ",a);
//					a--;
//				}
				
			}
			
		   	else
				printf("  ") ;
  		}	
	printf("\n");
	
	}
	return 0;
}
