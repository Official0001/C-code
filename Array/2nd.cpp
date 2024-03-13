#include<stdio.h>
int main()
{
	int a[5],i,len;
	len= sizeof(a)/sizeof(a[0]);
	printf("\nEnter Values in array\n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay array values\n");
	for(int i=0; i<len; i++){
		printf("%d\t",a[i]);
	}
	
	
	return 0;
}
