#include<stdio.h>
int main(){
	int t1=0,t2=1,fib,i=1,no;
	
	printf("Enter Terms : ");
	scanf("%d",&no);
	printf("%d\t%d\t",t1,t2);
	
	   while(i<no-1){
	   	
	 	fib=t1+t2;
	 	t1=t2;
		t2=fib;                                
		printf("%d\t",fib); 
		
		i++;
		}
		
		return 0; 
     }

