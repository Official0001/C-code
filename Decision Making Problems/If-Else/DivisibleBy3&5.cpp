#include<stdio.h>
int main()
{
	int no;
	
	printf("Enter Value : ");
	scanf("%d",&no);
	
	if(no%5==0 && no%11==0)
		printf("%d is Divisible by 5 And 11",no);
	else
		printf("%d is Not Divisible by 5 And 11",no);

	return 0;
	
}
