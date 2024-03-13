#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	printf("Enter the Marks of 5 Subject : \n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	total = m1+m2+m3+m4+m5;
	printf("Total Marks of 5 Subject is: %d\n",total);
	
	per = (total/5);
	printf("Percentage of 5 Subject is : %2f\n",per);
	
	return 0;	
}
