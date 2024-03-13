#include<stdio.h>
main()
{
	char m;

	printf("\n       ********** Menu **********\n\n C.Sa  D.Re  E.Ga  F.Ma  G.Pa  A.Dha  B.Ni\n");
	printf("\nEnter Indian Classical Musical Notes :");
	scanf("%c",&m);
	
	switch(m)
	{
		case 'C':
		printf("Western Note - Do");
		break;
	
		case 'D':
		printf("Western Note - Re");
		break;
		
		case 'E':
		printf("Western Note - Mi");
		break;
		
		case 'F':
		printf("Western Note - Fa");
		break;
		
		case 'G':
		printf("Western Note - So");
		break;
		
		case 'A':
		printf("Western Note - La");
		break;
		
		case 'B':
		printf("Western Note - Ti");
		break;
		
		default:
			printf("invalid choice");

		return 0;
	}
}
	
	
	
	
	
	
	

