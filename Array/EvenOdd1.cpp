#include<stdio.h>
int main()
{
	int a[5],even=0,odd=0;
	
	printf("Enter Array Element");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<5; i++)
	{
		if(a[i]%2==0){
			even++;
		
		}		
		else{
			odd++;
		}
		  
	}
		printf("Total Even = %d",even);
		printf("Total Odd = %d",odd);
	
	
	return 0;
}
