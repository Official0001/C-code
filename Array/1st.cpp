#include<stdio.h>
int main()
{
	int a[5],i,len,sum=0;
	len= sizeof(a)/sizeof(a[0]);
	printf("\nEnter Values in array\n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay arsray values\n");
	for(int i=0; i<len; i++){
		
		printf("%d\t",a[i]);
		sum = sum + a[i];
	}
	printf("\nSum of all element is %d\n",sum);
	
	
	return 0;
}
