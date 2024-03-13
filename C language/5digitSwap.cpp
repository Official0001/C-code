#include<stdio.h>
int main()
{
	int no=12345;
	
	int p1=no/10000;
	printf("First Number : %d\n",p1);
	
	int p2=0;
	int rem = no%10;
	p2 = rem*1000;
	printf("Last Number : %d\n",p2);
	

	
	return 0;
	
}
