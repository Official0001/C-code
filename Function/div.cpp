#include<stdio.h>
int main()
{
	void findDiv(int,int);
	int v1,v2; 
	printf("Enter Two Numbers : \n");  
	scanf("%d%d",&v1,&v2);
	findDiv(v1,v2);       
	
	return 0;
}

void findDiv(int a,int b){
	int result =a/b;
	printf("Division is : %d",result);
}
