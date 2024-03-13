#include<stdio.h>
int p=1,i=1;
int getPower(int b, int ind)
{
	if(i<=ind)
	{
		p=p*b;
		i++;
		getPower(b,ind);
	}
	else
	return p;
}


int main()
{
	int base,index;
	printf("Enter Base and Index : ");
	scanf("%d%d",&base,&index);
	int	result = getPower(base,index);
	printf("%d to the power of %d is %d",base,index,result);

	
	return 0;
}
