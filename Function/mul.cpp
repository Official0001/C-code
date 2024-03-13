#include<stdio.h>
int main()
{
	void findMul(int,int);
	int v1,v2; 
	printf("Enter Two Numbers : \n");  
	scanf("%d%d",&v1,&v2);
	findMul(v1,v2);       
	
	return 0;
}

void findMul(int a,int b){
	int result =a*b;
	printf("Multiplication is : %d",result);
}
