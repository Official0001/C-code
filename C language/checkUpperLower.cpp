#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the Any Alphabet : ");
	scanf("%c",&ch);
	
	(ch >='A' && ch<='Z')?printf("%c is Uppercase Letter",ch):printf("%c is Lowercase Letter",ch);

	return 0;
	
}
