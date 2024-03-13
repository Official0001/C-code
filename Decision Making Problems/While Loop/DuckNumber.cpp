#include<stdio.h>
int main()
{
	int num,flag=0;
	
	printf("Enter Any Number");2
	scanf("%d",&num);
	
	while(num!=0)   
	{
		if(num%10==0)  
		{
			flag=1;
			break;	
		}
		num=num/10;
	}
	if(flag==1)
		printf("\nThe Number is Duck Number");
	else 
		printf("\nThe is Not Duck Number");

	return 0;
}
