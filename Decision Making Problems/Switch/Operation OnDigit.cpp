#include<stdio.h>
main()
{
	int no,ch;
	printf("Menu \n1.Count Digit of Number \n2.Reverse Any Digit Number \n3.Calculate Sum of Digits\n\n");
	printf("Enter the choice\n ");
	scanf("%d", &ch);
	printf("\nEnter Any Number : ");
	scanf("%d",&no);
	
	switch (ch)
	{
	case 1: {
		int count=0;
		while (no != 0) {
    		no = no/ 10;
    		count++;
 			}
		printf("Count Is :%d",count);
		break;
	}
		
	case 2: {
		int rev=0,rem;
			while (no != 0) {
    		rem = no % 10;
    		rev = rev * 10 + rem;
    		no = no/ 10;
 			}
 		 	printf("Reverse Number is : %d",rev);
	
		break;
	}
		
	case 3: {
		int i=1,sum=0,rem;
	while (no != 0) {
		rem = no % 10;
		sum = sum + rem;
        no /= 10; 
    	}
      printf("Sum = %d",sum);
    break;
	}
		
	default:
			printf("Invalid Choice");
    }
}
