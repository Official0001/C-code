#include <stdio.h>

int main() {

    char v1='A'; 

    for (int i=1; i<=5; i++) {
    	
        	char v2 = v1;
        	
        for (int j=1; j<=5; j++) {
            printf("%c", v2);
            v2++;
        }
        printf("\n");
        v1++;
    }

    return 0;
}

