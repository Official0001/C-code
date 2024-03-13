#include<stdio.h>

int main()
{
	char str[100],maxChar;
	int count=0,maxCount=0,i,j; 
	printf("Enter string : ");
	gets(str);
	
	for(i=0; i<=str[i]!='\0'; i++)
	{
		count=0;	
		for(j=0; str[j]!='\0'; j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		
		}
		if(maxCount<count){
			 maxCount=count;
			 maxChar=str[i];	
		}
	}
	 printf("Highest frequency character is '%c' which occur %d times",maxChar,maxCount);
	
	return 0;
}
