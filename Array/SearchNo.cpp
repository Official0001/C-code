#include<stdio.h>
int main()
{
	int a[5],i,len,skey,flag=0;

	len=sizeof(a)/sizeof(a[0]);
	
	printf("\nEnter Values in Array\n");
	for(i=0; i<len; i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter search key value\n");
	scanf("%d",&skey);
	
	for(int i=0; i<len; i++){
		if(a[i]==skey){
			flag=1;
			break;
		}
	}
	if(flag)
	printf("\nvalue found");
	else
	printf("Not found");
	
	
	
	return 0;
}
