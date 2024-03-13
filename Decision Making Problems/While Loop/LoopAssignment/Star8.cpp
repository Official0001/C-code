#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=6; i++){
		
	  for(j=1; j<=11; j++){
			
			if(j==7-i || j==5+i || (i==6&&j==1) || ((i==6&&j==3)) || (i==6&&j==5) || (i==6&&j==7) || (i==6&&j==9)){
				printf("* ") ;
		}                                     			
		else
			printf("  ") ;
      }
	printf("\n");
}
	
	
	return 0;
}
