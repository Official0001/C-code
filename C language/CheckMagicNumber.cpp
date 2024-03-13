#include<stdio.h>
int main()
{
	int x,y,temp,no,number ,no1, sum1,rev=0;
	
	printf("Enter Four digit Number To Calculate Magic Number : ");
	scanf("%d",&no);
	number=no;
	temp=no;
	int r1 = (number / 1000) % 10;       
    int r2 = (number / 100) % 10;        
    int r3 = (number / 10) % 10;
    int r4 = (number /1)%10;
      printf("%d %d %d %d\n",r1,r2,r3,r4);
    int sum = r1 + r2 + r3 + r4 ;  
    /*
    
    int rem = sum%10;
	sum=sum/10;
	rev = rev + rem*10;
	
	rem = sum%10;
	sum1=sum/10;
	rev = rev + rem;
	
	rev =rev+sum;
	
	
	int M = sum * rev;
	*/
	  int rem = sum%10;
	     sum/=10;
	     rev=rev+1000*rem;
	        printf("-> %d %d",rem,rev);
	     
	 
	  printf(" sum is %d\n rev is %d\n ",sum , rev);
//	(M == temp) ? printf("Given Number is Magic Number"):printf("Given Number is Not Magic Number");
	
	return 0;
	
}
