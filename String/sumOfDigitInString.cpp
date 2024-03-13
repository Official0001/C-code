#include<stdio.h>
int main()
{
	char str[50],sum;
	printf("Enter String: ");
	gets(str);

	for(int i=0; str[i]!='\0'; i++) 
	{
        if (str[i]>='0' && str[i]<='9')
		{
            sum=sum+str[i]-'0';
        }
    }
	printf("The sum of integers in the string is: %d\n",sum);
	
	return 0;
}
