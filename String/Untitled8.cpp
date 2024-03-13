#include<stdio.h>
int main()
{
	char str[50];
	
	printf("Enter String : ");
	gets(str);
	int i=0;
	while(str[i]!='\0')
	{
		str[i] = str[i]+32;
		i++;
	}
	printf("\n%s",str);
	
	return 0;
}
