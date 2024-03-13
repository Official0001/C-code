#include<stdio.h>
int main()
{
	int cook,time,max;
	
	printf("Enter How Many packet cooked : ");
	scanf("%d",&cook);//150
	
	printf("Enter the Minutes to served : ");
	scanf("%d",&time);//
	
	max=cook*time;
	((cook>0 && cook<1000)&&(time>0 && time<1000))? printf("Maximum Number of Customer Served %d",max):printf("INVALID INPUT");
	
	return 0;
}
