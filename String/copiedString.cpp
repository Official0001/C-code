#include<stdio.h>
int main()
{
	char str1[20],str2[20],temp,len;
	
	printf("Enter 1st String : ");
	gets(str1);
	
	int i=0;
	while(str1[i]!='\0'){
		len++;
		i++;
	}
	printf("length is : %d",len); 
	
	//Copied String
	for(int i=0; i<=len; i++)
	{
		str2[i] = str1[i];
	}
	printf("\nCopied String : %s",str2);
	
	return 0;
}
