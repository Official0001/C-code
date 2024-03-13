#include<stdio.h>
int main()
{
	int bill,dis;
	
	printf("Enter Bill :");
	scanf("%d",&bill);
	
	if(bill<1000){
	
		dis = bill*0.05;
		printf("Discount on Bill : %d",dis);
		printf("\nTotal Bill is : %d",(bill-dis));
	}
		
	else if(bill>1000 && bill<=2500){
	
		dis = bill*0.06;
		printf("Discount on Bill : %d",dis);
		printf("\nTotal Bill is : %d",(bill-dis));
	}
		
	else if(bill>2500 && bill<=5000){
	
		dis = bill*0.07;
		printf("Discount on Bill : %d",dis);
		printf("\nTotal Bill is : %d",(bill-dis));
	}
		
	else if(bill>5000 && bill<=10000){
	
		dis = bill*0.08;
		printf("Discount on Bill : %d",dis);
		printf("\nTotal Bill is : %d",(bill-dis));
	}
		
	else{
	
		dis = bill*0.10;
		printf("Discount on Bill : %d",dis);
		printf("\nTotal Bill is : %d",(bill-dis));
	}
	
	return 0;
}
