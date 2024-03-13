#include<stdio.h>
int main(){
	int f1=0,f2=1,fib,i=1,no;
	
	printf("Enter limit : ");
	scanf("%d",&no);
	printf("%d\t%d\t",f1,f2);
	   while(i<=no-2){
	 	fib=f1+f2;
	 	f1=f2;
		f2=fib; 
		printf("%d\t",fib); 
		i++;
		}
		
		
		
		return 0; 
     }

