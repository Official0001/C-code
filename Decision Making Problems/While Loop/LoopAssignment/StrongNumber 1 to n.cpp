#include <stdio.h>
int main() 
{
    int range;
    printf("Enter Range : ");
    scanf("%d", &range);

    printf("Strong numbers from 1 to %d are:\n", range);

    for (int n=1; n<=range; n++) 
	{
        int  sum=0, rem, temp;
        temp = n;

        while (temp>0) {
            int fact=1;
            rem=temp%10;
			int i=1;
            while (i<=rem) {
                fact = fact * i;
                i++;
            }

            sum = sum + fact;
          
            temp = temp / 10;
        }

        if (n == sum) {
            printf("%d\n", n);
        }
    }

    return 0;
}

