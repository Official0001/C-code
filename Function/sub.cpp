#include<stdio.h>
int main()
{
	void sub(int,int);
	int v1,v2; 
	printf("Enter Two Numbers : \n");  
	scanf("%d%d",&v1,&v2);
	sub(v1,v2);       
	
	return 0;
}

void sub(int a,int b){
	int sub =a-b;
	printf("Substraction is : %d",sub);
}
