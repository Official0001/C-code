#include<stdio.h>
int main()
{
	int no=1234;
	
	int p1=0;
	int rem = no%10;
	p1 = rem*1000;
	printf("Last Number is First : %d\n",p1);
	
	int p2=no/1000;
	printf("First Number is Last : %d\n",p2);
	
	int mid = (no/10)%100;
	printf("Middel Number : %d",mid);
	
	int fno=0;
	fno = p1+(mid*10)+p2;
	printf("\nFinal Output: %d",fno);
	
	
	return 0;
	
}
