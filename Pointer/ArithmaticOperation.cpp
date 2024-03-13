#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	
	printf("Enter Two Values : \n");
	scanf("%d%d",&a,&b);
	
	p1=&a;
	p2=&b;
	
	printf("\nAddition is %d\n",*p1 + *p2);
	printf("Substraction is %d\n",*p1 - *p2);
	printf("Division is %d\n",*p1 / *p2);
	printf("Mutiplication is %d\n",*p1 * *p2);
	return 0;
}
