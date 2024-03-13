#include<stdio.h>
#include<math.h>
main()
{
	int base,exp,result;
	
	printf("Enter Base : ");
	scanf("%d",&base);
	printf("Enter Exponent: ");
	scanf("%d",&exp);
	
	result = pow(base,exp);
	printf("result = %d",result);
	
	
	

return 0;	
}
