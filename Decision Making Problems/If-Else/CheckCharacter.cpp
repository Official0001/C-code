#include<stdio.h>
int main()
{
	int ch;
	
	printf("Enter the Any Character : ");
	scanf("%c",&ch);
	
	if(ch >='a' && ch<='z' && ch >='A' && ch<='Z' )
		printf("%c is Alphabet",ch);
	else if(ch>= '0' && ch<= '9')
		printf("%c is a Number",ch);
	else
		printf("%c is a Special Character",ch);

	return 0;
	
}
