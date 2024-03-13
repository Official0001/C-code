#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("Enter the Three Value : ");
	scanf("%d%d%d",&a,&b,&c);
	
	max=(a>b)?a:b;
	
	(max>c)?printf("%d is Maximum",max):printf("%d is Maximum",c);

	return 0;
	
}
