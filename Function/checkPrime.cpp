#include <stdio.h>

void prime(int);

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}

void prime(int n)
{
    int flag = 0;
    int i=2;

    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++; 
    }

    if(flag)
        printf("\nThe No is not prime");
    else
        printf("\nThe No is prime");
}

