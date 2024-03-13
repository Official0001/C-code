//Only If Condition Used
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Values : \n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	printf("%d is Greater",a);
	
	if(b>a && b>c)
	printf("%d is Greater",b);
	
	if(c>a && c>b)
	printf("%d is Greater",c);
	
	return 0;
}
