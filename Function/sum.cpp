#include<stdio.h>
int main()
{
	void sum(int,int);
	int v1,v2; 
	printf("Enter Two Numbers : \n");  
	scanf("%d%d",&v1,&v2);
	sum(v1,v2);       
	
	return 0;
}

void sum(int a,int b){
	int sum =a+b;
	printf("Sum is : %d",sum);
}
