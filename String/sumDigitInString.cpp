#include<stdio.h>
int main()
{
	char str[20];
	int i,sum=0,sum1=0,num=0;
	printf("Enter String : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			sum =sum + (str[i]-'0');	
			num = num*10+(str[i]-'0');
		}	
		else
		{
			sum1=sum1+num;
			num=0;
		}
	}
	printf("Sum of digit in String : %d\n",sum);
	printf("Sum of Numbers in String : %d",sum1);
	
	return 0;
}
