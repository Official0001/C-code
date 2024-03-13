#include<stdio.h>
void printNo(int x,int n){
	if(x>n)
 return;

	printf("%d\n",x);
	printNo(x+1,n);
	
	return;
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	int a=1;
	printNo(a,num);
	
	return 0;
}
