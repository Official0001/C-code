#include<stdio.h>
int main()
{
	int n,num,i,flag;
	
	printf("Enter Range : ");
	scanf("%d",&num);
	
	for(n=2; n<=num; n++){
				
		flag =1;
				
		for(i=2; i<=n/2; i++){
			
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
		
		if(flag==1)
			printf("%d\t",n);
			
	}
		
	return 0;
}
