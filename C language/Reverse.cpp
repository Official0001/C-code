#include<stdio.h>
int main()
{
	int no,rev=0,rem;
	
	printf("Enter the Any Three Digit : \n");
	scanf("%d",&no);
	
	rem = no%10;             //	rem  =  12345%10 = 5
	no=no/10;                //  no   =  12345/10 = 1234
	rev = rev + rem*100;	 // rev =  0 + 5*10000 = 50000
	
	rem = no%10;			//  rem = 1234%10 = 4
	no=no/10;				//  no  = 1234/10 = 123
	rev = rev + rem*10;	//  rev = 50000 + 4*1000 = 54000
	
	rem = no%10;            //  rem = 123%10 = 3
	no=no/10;				//  no  = 123/10 = 12
	rev = rev + rem;	//  rev = 54000+3*100 = 54300
	
//	rem = no%10;            //  rem = 12%10 = 2
//	no=no/10;				//  no  = 12/10 = 1
//	rev = rev + rem*10;		//  rev = 54300+2*10= 54320
	
//	rem = no%10;			//  rem = 1%10  = 1
//	no=no/10;				//  no  = 1/10  = 0
//	rev = rev + rem;		//  rev = 54320 + 1 = 54321
	
//	rev =rev+no;
	
	printf("Reverse is : %d",rev);
	
	return 0;
	
}
