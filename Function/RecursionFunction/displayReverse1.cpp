#include<stdio.h>
void displayReverse(int a[], int size) {
    if(size>=0) {
        printf("%d\n", a[size]);
    
    	displayReverse(a,size-1); 
	}
    
}

int main() {
    int size;
    printf("Enter Size Of Array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter Elements in Array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    
    printf("Display Reverse :\n");
    displayReverse(a,size-1);
    
    return 0;
}

