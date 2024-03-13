#include<stdio.h>
#include<math.h>

int check_ArmstrongNumber(int num, int count) {
    if(num>0)
        return (pow(num%10, count) + check_ArmstrongNumber(num / 10, count));
    else
        return 0;
}

int main() 
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int n=num;
    while(n!=0) {
        n=n/10;
        count++;
    }

    if(check_ArmstrongNumber(num, count) == num)
        printf("It is an Armstrong Number\n");
    else
        printf("It is not an Armstrong Number\n");

    return 0;
}

