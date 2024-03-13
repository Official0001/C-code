#include<stdio.h>
int main()
{
	int a[5], i, len, skey, flag=0;
	
	len = sizeof(a)/sizeof a[0];
	printf("\nEnter Values in Array\n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Search key Value\n");
	scanf("%d",&skey);
	
	for(int i=0; i<len; i++)
	{
		if(a[i]==skey)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	printf("Value Found");
	else
	printf("Not Found");
	
	return 0;
}
