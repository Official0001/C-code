#include <stdio.h>
#include <math.h>

int main() {
    int n, sum=0, count=0;

    printf("Enter Any Number: ");
    scanf("%d", &n);  
    int temp = n;
    
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = n;
    
    while (temp > 0) {
        int rem = temp%10;
        sum = sum+pow(rem, count);
        temp = temp/10;
    }

    if(n == sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

