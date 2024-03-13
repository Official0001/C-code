#include <stdio.h>

int main() {
int a=1;
    for (int i=1; i<=5; i++) {
    		
        for (int j=1; j<=5; j++) {
           if(j==2 || j==4)
           printf("*\t");
           else{
           	printf("%d\t",a++);
		   }
        }
        printf("\n");
     
    }
    return 0;
}

