#include<stdio.h>
int main() {
    int m1[3][3],m2[3][3] ,flag=0;

    printf("Enter Elements in 1st Matrix: \n");
    for (int i=0; i<3; i++) 
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &m1[i][j]);	
		}  
    }
    
    printf("Enter Elements in 2nd Matrix: \n");
    for (int i=0; i<3; i++) 
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &m2[i][j]);	
		}  
    }
    
    printf("1st Matrix: \n");
    for (int i=0; i<3; i++) 
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",m1[i][j]);	
		}  
		printf("\n");
    }
    
    printf("2nd Matrix: \n");
    for (int i=0; i<3; i++) 
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",m2[i][j]);	
		}  
		printf("\n");
    }
    
    
    for(int i=0; i<3; i++)
    {
    	for(int j=0; j<3; j++)
    	{
    		if(m1[i][j]!=m2[i][j])
    		{
    			flag=1;
			}
		}
	}
    if(flag==0)
    printf("Equal");
    else
    printf("Not Equal");
   

   return 0; 
}
