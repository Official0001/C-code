#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	printf("Enter the Marks of Physics Chemistry Biology Mathematics and Computer : \n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	total = m1+m2+m3+m4+m5;
//	printf("Total Marks of 5 Subject is: %d\n",total);
	per = (total/5);
	printf("Percentage of 5 Subject is : %2f\n",per);
	
	(per>=90) ? printf("Grade A"):
	(per>=80)? printf("Grade B"):
	(per>=70)? printf("Grade C"):
	(per>=60)? printf("Grade D"):
	(per>=40)? printf("Grade E"):
	(per<40)? printf("Grade F"):printf("Fail");
		
	
	return 0;	
}
