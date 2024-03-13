#include<stdio.h>
int main()
{
	int a[5],len,sum=0;
	len = sizeof(a)/sizeof a[0];
	
	printf("Enter 5 Array :\n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<len; i++)
	{
		sum = sum + a[i] ;
	}
	printf("Sum Of 5 Array : %d",sum);
	
	return 0;
}
