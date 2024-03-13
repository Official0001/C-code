#include<stdio.h>
int main()
{
	char str1[20], str2[20] ;
	int len1=0,len2=0,x;
	printf("Enter 1st String : ");
	gets(str1);
	printf("Enter 2nd String : ");
	gets(str2);
	
	int i=0;
	while(str1[i]!='\0'){
		len1++;
		i++;
	}
	int j=0;
	while(str2[j]!='\0'){
		len2++;
		j++;
	}
	
	printf("\nFirst String length is : %d",len1);
	printf("\nSecond String length is : %d",len2);
	
	for(i=0; i<=len1 && i<=len2; i++)
	{
		x=str1[i]-str2[i];
		
		if(x!=0)
		{
			break;
		}
	}
	if(x>0)
	printf("\n%s is greater than %s ",str1,str2);
	else if(x<0)
	printf("\n%s is less than %s ",str1,str2);
	else
	printf("\nBoth String Are Same");
	
	return 0;
}
