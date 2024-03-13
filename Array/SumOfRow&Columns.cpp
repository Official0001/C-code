#include <stdio.h>

int main() {
    int m1[3][3] ;

    printf("Enter Elements in Matrix: \n");
    for (int i=0; i<3; i++) 
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &m1[i][j]);	
		}  
    }
    
    printf("Display Matrix: \n");
    for(int i=0; i<3; i++) 
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",m1[i][j]);	
		}  
		printf("\n");
    }
    

    for(int i=0; i<3; i++) 
	{ 
		int sr=0;
		int sc=0;
        for(int j=0; j<3; j++)
        {
        	sr = sr + m1[i][j];
        	sc= sc + m1[j][i];
		}
		printf("Sum of %d row  = %d ",i,sr);
		printf("Sum of %d column = %d ",i,sc);
		printf("\n");
    }

  
    return 0;
}

