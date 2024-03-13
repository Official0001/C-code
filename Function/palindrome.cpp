#include<stdio.h>
int main()
{
	void checkPalindrome(int);
	
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	
	checkPalindrome(num);
}

void checkPalindrome(int n){
	int rev=0,rem;
	int temp = n;
	while(n>0){
		rem = n%10;
		rev = rev*10+rem;
		n=n/10;
	}

	if(rev == temp)
	printf("Palindrome");
	else
	printf("Not Palindrome");
}

