#include<stdio.h>
main()
{
	int A,B,C,ch;
	printf("Menu \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
	printf("Enter the choice ");
	scanf("%d", &ch);
	printf("Enter the 2 Numbers\n");
	scanf("%d %d",&A,&B);
	switch (ch)
	{
	
		case 1: {
			C=A+B;
		printf("Addition is %d",C);
			
		}break;
		
		case 2: C=A-B;
		printf("Subtraction is %d",C);
		break;
		case 3: C=A*B;
		printf("Multiplication is %d",C);
		break;
		case 4: C=A/B;
		printf("Division is %d",C);
		break;
		case 5: C=A%B;
		printf("Remainder is :");
		break;
		default:
		printf("Invalid Choice");
		
		return 0;
    }
}
