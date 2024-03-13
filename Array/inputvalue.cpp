#include<stdio.h>
int main()
{
	int a[5],len;
	len = sizeof(a)/sizeof a[0];
	
	printf("Enter Five Element ");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Display Array\n");
	for(int i=0; i<len; i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	
	return 0;
}
