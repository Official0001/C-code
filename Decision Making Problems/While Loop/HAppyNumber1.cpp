//
#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0,d, rem;

    printf("Enter Number: ");
    scanf("%d", &n);

	while(n>0){
		if(n==1){
			break;
		}
		d=n%10;
		sum= sum+d;
		n=n/10;
	}
	
	if(n==1)
		printf("Happy Number");
	else
		printf("Not Happy Number");

    return 0; // Moved the return statement here
}

