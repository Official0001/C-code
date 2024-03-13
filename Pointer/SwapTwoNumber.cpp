#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,temp;
	
	printf("Enter Two Values : \n");
	scanf("%d%d",&a,&b);
	printf("\nBefore Swapping : A=%d   B=%d\n",a,b);
	p1=&a;
	p2=&b;
	
	temp= *p1;
	*p1 = *p2;
	*p2 = temp;
	
	printf("\nAfter Swapping : A=%d   B=%d\n",*p1,*p2);
	
	return 0;
}
