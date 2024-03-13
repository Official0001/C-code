#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	
	printf("Enter the Cost Price : ");
	scanf("%d",&cp);
	
	printf("Enter the Sell Price : ");
	scanf("%d",&sp);
	 
	// profit= sp-cp;
	 //printf("Profit is %d\n",profit);
	 
	 //loss = cp-sp;
	 //printf("Loss is : %d",loss);
	 
	 if(sp > cp)
	 printf("profit is: %d",(sp-cp));
	 else if(cp > sp)
	 printf("Loss is : %d",(cp-sp));
	 else
	 printf("No profit No loss");
	

	return 0;
	
}
