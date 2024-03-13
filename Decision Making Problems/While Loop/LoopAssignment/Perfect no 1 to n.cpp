#include<stdio.h>
int main()  //Perfect Number 1 to n
{
	int n, range;
	printf("Enter Number");
	scanf("%d",&range);
	
	for(int n=1; n<=range; n++){
	
	int sum=0,i=1;

	while(i < n)
	{ 
    	if(n%i==0){
    		sum=sum+i;
		}
    	i++;
	}
	if(n==sum)
		printf("%d\n",n);
		
	}
	
	
	return 0;
}
