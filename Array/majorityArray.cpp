#include<stdio.h>
int main()
{
	int str[5],maxChar;
	int count=0,maxCount=0,i,j,size=5;
	int flag=1; 
	printf("Enter size :");
	scanf("%d",&size);
	printf("Enter Array : ");
	for(i=0;i<size;i++)
	scanf("%d",&str[i]);
	
	for(i=0; i<size; i++)
	{
		count=0;
		for(j=0; j<size; j++)
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
		if(maxCount>size/2){
			flag=0;
		}
		
	}
	if(flag==0)
	 printf("Majority Array ---->>'%d' which occur %d times",maxChar,maxCount);
	else
	printf("Not");
	
	return 0;
}
