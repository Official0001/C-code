#include<stdio.h>
void printNo(int x,int n){
	if(x>=n)
	 return;
	
	printf("%c  ",x);
	printNo(x+1,n);
	
	return;
}

int main()
{
	int num=123;
	int a=97;
	printNo(a,num);
	
	return 0;
}
