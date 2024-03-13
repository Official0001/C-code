#include<stdio.h>
int main()
{
	char str[50];
	int len=0,i;
	printf("Enter String : ");
	gets(str);
	
	i=0;
	
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	
	for(i=0; i<len/2; i++)
	{
		if(str[i] != str[len-1-i])
		{
			printf("Not Palindrome");
			break;
		}
	}
	if(i==len/2)
	printf("Palindrome");
	
	
	return 0;
}
