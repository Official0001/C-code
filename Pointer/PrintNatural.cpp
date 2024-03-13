#include<Stdio.h>
int main()
{
	int range,*ptr,i=1;
	ptr = &range;
	printf("Enter Range : ");
	scanf("%d",&range);
	
	while(i<=*ptr)
	{
		printf("%d ",i);
		i++;
	}
	
	
	
	return 0;
}
