#include<stdio.h>
int main()
{
	int num,flag,range;
	printf("Enter Number : ");
	scanf("%d",&range);
	
	
	for(int num=2; num<=range; num++){
	flag=1;
	
	for(int i=2; i<=num/2; i++)
	{
		if(num%i==0){
			flag=0;
			break;
		}
	}
	if(flag==1)
	printf("%d\t",num);
	}
	
	return 0;
}
