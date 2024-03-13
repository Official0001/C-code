#include<stdio.h>
int main()
{
	for(char i='A'; i<='E'; i++)
	{
		for(char j='A'; j<='E'; j++)
		{
			if(j=='A' || j=='B' || j=='C' || j=='D' || j=='E')
			printf("%c",j);
		}
		printf("\n");
	}
	
	

	return 0;
}
