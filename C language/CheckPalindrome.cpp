#include<stdio.h>
int main()
{
	int n,rev=0,rem,temp;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	temp=n;
	rem = n%10;
	n=n/10;
	rev = rev + rem*100;
	
	rem = n%10;
	n=n/10;
	rev = rev + rem*10;
	
	rev = rev+n;
	printf("Reverse No: %d",rev);
	
	(temp == rev) ? printf("Number is Palindrome"):printf("Number is Not Palindrome");
}
