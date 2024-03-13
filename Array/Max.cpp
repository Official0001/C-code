 #include<stdio.h>
int main()
{
	int a[5],i,len,sum=0;
	len = sizeof(a)/sizeof(a[0]);
	printf("\nEnter values in array\n");
	for(int i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	printf("\nDisplay array values\n");
	int max=0;
	int min=a[0];
	
	for(int i=0; i<len; i++)
	{
		printf("%d\t",a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\n Max value is %d\n",max);
	printf("\n Min value is %d\n",min);
	
	return 0;
}
