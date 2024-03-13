#include<stdio.h>
int main()
{
	int a;
	printf("Enter Angle Of Wave : ");
	scanf("%d",&a);
	
	if(a>103 && a<=142)
		printf("Primary Waves");
		
	else if( (a<103 && a>0) || (a>142 && a<=180) )
		printf("Secondary Wave");
		
	else if(a==0)
		printf("Surface Wave");
		
	else
		printf("");
	
	
	return 0;
}
