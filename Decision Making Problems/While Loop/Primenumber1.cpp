#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    int i = 2;

    while(i<=n){
        int flag = 0;
        int j = 2;

        while (j <= i / 2) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag == 0) {
              
            printf("%d = %d\n", sum); 
        }
        i++;
    }

    

    return 0;
}

