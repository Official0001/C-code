#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[50];
	char temp,len;
	
	printf("Enter String : ");
	gets(str);
	int i=0;
	
//	len = strlen(str);
	
	while(str[i]!='\0'){
		len++;
		i++;
	}
	printf("length is : %d",len);
	6
	//rev logic
	for(int i=0,j=len-1; i<len/2; i++,j--)
	{
		int	temp = str[i];
			str[i]= str[j];
			str[j] = temp;
	}
	printf("\nReverse String : %s",str);
	
	return 0;
}
