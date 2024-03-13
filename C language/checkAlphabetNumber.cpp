#include<stdio.h>
int main()
{
	int ch;
	
	printf("Enter the Any Character : ");
	scanf("%c",&ch);
	
	(ch >='a' && ch<='z' || ch>= '0' && ch<= '9')?printf("%c is Alphabet",ch):printf("%c is Number",ch);

	return 0;
	
}
