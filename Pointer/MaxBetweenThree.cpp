#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,*p3;
	
	printf("Enter Three Values : \n");
	scanf("%d%d%d",&a,&b,&c);
	
	p1=&a;
	p2=&b;
	p3=&c;
	(*p1>*p2 && *p1>*p3) ? printf("%d is Max",*p1):
	(*p2>*p1 && *p2>*p3) ? printf("%d is Max",*p2):
	(*p3>*p1 && *p3>*p2) ? printf("%d is Max",*p3):printf("Equal Numbers");

	
	return 0;
}
