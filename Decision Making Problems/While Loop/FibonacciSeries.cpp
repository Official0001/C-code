#include<stdio.h>
int main()
{
	int n,t1=0,t2=1,fib,i=3;
	int next=t1+t2	;
	printf("Enter Terms : ");
	scanf("%d",&n);
	i=3;
	while(i<n){
		fib=t1+t2;
		t1=t2;
		t2=fib;
	}
	i++;
	printf("%d",fib);
	
	
	
	return 0;
}
