#include <stdio.h>
#include<math.h>
int main() {
    int n, sq, temp, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    sq = n*n;
    temp = n; 
    
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    printf("C=%d\n",count);
    
    int rem = sq % (int)pow(10, count);
    
    if (rem == n) 
        printf("Automorphic Number.\n", n);
    else 
        printf("Not Automorphic Number.\n", n);
    
    
    return 0;
}

