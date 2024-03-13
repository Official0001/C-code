#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	int i,j,len1=0,len2=0,flag;
	
	printf("Enter 1st String : ");
	gets(str1);
	printf("\nEnter 2nd String : ");
	gets(str2);
	
	for(i=0; str1[i]!='\0'; i++)
	len1++;
	
	for(i=0; str2[i]!='\0'; i++)
	len2++;
	
	if(len1==len2)
	{
		for(i=0; str1[i]!='\0'; i++)
		{
			flag=0;
			for(j=0; str2[j]!='\0'; j++)
			{
				if(str1[i] == str2[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
            {
                break;
            }
		}
		if(flag==1)
		printf("\nStrings Are Anagram");
		else
		printf("\nStrings are not Anagram");
	}
	else
	printf("\nStrings are not Anagram");
	
	
	return 0;
}
