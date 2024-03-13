#include <stdio.h>
#include <math.h>

void armstrong(int);

int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    armstrong(num);

    return 0;
}

void armstrong(int n)
{
    int temp=n;
    int sum=0;
    int count=0;
  
    while(n>0)
    {
        n = n/10;
        count++;
    }
    n = temp;
    while(n>0)
    {
        int n1 = n % 10;
        sum = sum+pow(n1,count);
        n=n/10;
    }
    if (sum == temp)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}

