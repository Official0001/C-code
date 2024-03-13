#include <stdio.h>

int main() {
	int num=0,ch=64;
    for (int i=1; i<=6; i++) 
	{
		if(i%2==0)
		num++;
		else
		ch++;
    	
        for (int j=1; j<=5; j++) 
		{
            if (i % 2 == 0) 
                printf("%d\t", num); 
            else 
                printf("%c\t", ch);
            
        }
        printf("\n");
    }

    return 0;
}

