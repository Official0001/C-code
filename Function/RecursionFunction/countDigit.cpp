#include<stdio.h>
int count=0; 
int countDigits(int n) {
    if (n!=0) {
        count++;
        countDigits(n/10);
    }
    else {
        return count;
    }
}

int main() 
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    int result = countDigits(num);

    printf("Number of digits in %d = %d\n", num, result);

    return 0;
}

