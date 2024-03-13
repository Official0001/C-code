#include <stdio.h>

int main(){
	
	int n1,n2; //temp;
	
	printf("Enter the Two numbers: ");
	scanf("%d %d",&n1,&n2);
	
	printf("Before Swapping : N1:%d   N2:%d",n1,n2);
	
//	temp = n1;
//	n1 = n2;
//	n2 = temp;

	// By using two variable
	
    n1 = n1+n2;
	n2 = n1-n2;
	n1 = n1-n2;

	printf("\n \nAfter Swapping : N1:%d   N2:%d",n1,n2);

	return 0;
}
