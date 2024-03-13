#include<stdio.h>
struct player{
	int jersyNo,pMatches,pRun;
	char pName[10];
};

int main()
{
	struct player p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
	
	printf("Enter 10 player Details \n\n");
	
	printf("Enter 1st player info\n");
	scanf("%d%d%d%s",&p1.jersyNo,&p1.pMatches,&p1.pRun,&p1.pName);
		printf("Enter 2nd player info\n");
	scanf("%d%d%d%s",&p2.jersyNo,&p2.pMatches,&p2.pRun,&p2.pName);
		printf("Enter 3rd player info\n");
	scanf("%d%d%d%s",&p3.jersyNo,&p3.pMatches,&p3.pRun,&p3.pName);
		printf("Enter 4th player info\n");
	scanf("%d%d%d%s",&p4.jersyNo,&p4.pMatches,&p4.pRun,&p4.pName);
		printf("Enter 5th player info\n");
	scanf("%d%d%d%s",&p5.jersyNo,&p5.pMatches,&p5.pRun,&p5.pName);
		printf("Enter 6th player info\n");
	scanf("%d%d%d%s",&p6.jersyNo,&p6.pMatches,&p6.pRun,&p6.pName);
		printf("Enter 7th player info\n");
	scanf("%d%d%d%s",&p7.jersyNo,&p7.pMatches,&p7.pRun,&p7.pName);
		printf("Enter 8th player info\n");
	scanf("%d%d%d%s",&p8.jersyNo,&p8.pMatches,&p8.pRun,&p8.pName);
		printf("Enter 9th player info\n");
	scanf("%d%d%d%s",&p9.jersyNo,&p9.pMatches,&p9.pRun,&p9.pName);
		printf("Enter 10th player info\n");
	scanf("%d%d%d%s",&p10.jersyNo,&p10.pMatches,&p10.pRun,&p10.pName);
	
	printf("1st player Info : %d\t%d\t%d\t%s",p1.jersyNo,p1.pMatches,p1.pRun,p1.pName);
	printf("\n2nd player Info : %d\t%d\t%d\t%s",p2.jersyNo,p2.pMatches,p2.pRun,p2.pName);
	printf("\n3rd player Info : %d\t%d\t%d\t%s",p3.jersyNo,p3.pMatches,p3.pRun,p3.pName);
	printf("\n4th player Info : %d\t%d\t%d\t%s",p4.jersyNo,p4.pMatches,p4.pRun,p4.pName);
	printf("\n5th player Info : %d\t%d\t%d\t%s",p5.jersyNo,p5.pMatches,p5.pRun,p5.pName);
	printf("\n6th player Info : %d\t%d\t%d\t%s",p6.jersyNo,p6.pMatches,p6.pRun,p6.pName);
	printf("\n7th player Info : %d\t%d\t%d\t%s",p7.jersyNo,p7.pMatches,p7.pRun,p7.pName);
	printf("\n8th player Info : %d\t%d\t%d\t%s",p8.jersyNo,p8.pMatches,p8.pRun,p8.pName);
	printf("\n9th player Info : %d\t%d\t%d\t%s",p9.jersyNo,p9.pMatches,p9.pRun,p9.pName);
	printf("\n10th player Info : %d\t%d\t%d\t%s",p10.jersyNo,p10.pMatches,p10.pRun,p10.pName);
	
	
	return 0;
}
