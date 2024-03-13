#include<stdio.h>
int main()
{
	int a[5];
	printf("Enter Array Element In Ascending Order : \n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nMissing Element :  ");
	for(int i=0; i<5; i++)
	{
	    int first = a[i];
	    int sec = a[i+1];
	    
		for(int j= first+1 ; j<sec; j++)
		{
			printf("%d  ",j);
		}
	}
	
	
	return 0;
}
