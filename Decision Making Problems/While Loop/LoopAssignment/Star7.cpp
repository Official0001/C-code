#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=6; i++){
		
	  for(j=1; j<=11; j++){
			
		if(j>=i && j<=12-i){
			if((i%2==1 && j%2==0) || (i%2==0 && j%2==1))
					printf("* ");
			else 
					printf("  ");
		}                                     			
		else
			printf("  ") ;
      }
	printf("\n");
}
	
	
	return 0;
}
