//Happy Number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,rem;
	n=sum;
	printf("Enter Numer : ");
	scanf("%d",&n);
	
	while(sum!=1){
		sum=0;
		while(n>0){
			rem= n%10;
			sum=sum+pow(rem,2);
			n=n/10;		
	}

	if(sum==1)
		printf("Happy Number");
	else
		printf("Not Happy Number");
		
		break;
}
	return 0;
}
