#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	
	printf("Enter Two Values : \n");
	scanf("%d%d",&a,&b);
	
	p1=&a;
	p2=&b;
	
	(*p1>*p2) ? printf("%d is Max",*p1):printf("%d is Max",*p2);

	
	return 0;
}
