#include<stdio.h>
int main()
{
	int n,i=1,table;
	
	 printf("Enter Which Table you Want print : ");
	 scanf("%d",&n);
	 
	 while(i<=10){
	 	//table=n*i;
	 	printf("%d\n",n*i);
	 	i++;	
	 }
		
	
	return 0;
}
