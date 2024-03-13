#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter Article Number : ");
	scanf("%d",&a);
	
	if(a>=14 && a<=18)
		printf("Right to Equality");
	else if(a>=19 && a<=22)
		printf("Right to Freedom");
	else if(a>=23 && a<=24)
		printf("Right to Against Exploitation");
	else if(a>=25 && a<=28)
		printf("Right to Freedom of Religion");
	else if(a>=29 && a<=30)
		printf("Cultural and educational rights");
	else if(a>=32 && a<=35)
		printf("Right to constitutional Remedies");
	else if(a==31)
		printf("Right related to Property");
	else
		printf("");
	
}
