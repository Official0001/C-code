#include <stdio.h>

int main() {
    int n, count;
    
    printf("Enter Number: ");
    scanf("%d", &n);

    int i = 0; 

    while (i <= 9) {
        int temp = n;
        count = 0;

        while (temp != 0) {
            int rem = temp % 10;
            if (rem == i) {
                count++;
            }
            temp = temp / 10;
        }
        printf("%d = %d\n", i, count);
        
        i++; 
    }
    
    return 0;
}

