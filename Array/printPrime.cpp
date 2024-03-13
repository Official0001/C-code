#include <stdio.h>
int main() {
    int num, a[5],len ;
    
    len = sizeof (a) / sizeof a[0];

    printf("Enter elements of the array:\n");
    for (int i=0; i<len; i++) {
        scanf("%d", &a[i]);
    }

    printf("Prime Numbers in the array:\n");
    for (int n=1; n<len; n++) 
	{
        int num=a[n];
        int flag=1;

        for (int i=2; i<=num/2; i++) 
		{
            if (num%i == 0) {
                flag=0;
                break;
            }
        }

        if (flag == 1) {
            printf("%d\n ",num);
        }
    }

    return 0;
}

