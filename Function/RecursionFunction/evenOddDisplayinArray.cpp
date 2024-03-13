#include <stdio.h>
void displayEven(int a[], int size, int i) {
    if(i<size) 
	{
        if(a[i]%2==0) {
            printf("%d  ",a[i]);
        }
        i++;
        displayEven(a,size,i);
    }
}

void displayOdd(int a[], int size,int i) {
    if(i<size) 
	{
        if(a[i]%2==1) {
            printf("%d  ",a[i]);
        }
        displayOdd(a,size,i+1);
    }
}

int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter Elements in the Array: ");
    for (int i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("Even Numbers : ");
    displayEven(a,size,0);
    printf("\n");

    printf("Odd Numbers : ");
    displayOdd(a,size,0);
    printf("\n");

    return 0;
}

