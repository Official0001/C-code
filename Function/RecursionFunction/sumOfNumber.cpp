#include<stdio.h>
void sum(int n, int s){
	if(n==0){
		printf("Addition is %d",s);
		return;
	}
	else{
		sum(n-1,s+n); 
		return;
	}
	
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	sum(num,0);
	
	return 0;
}
