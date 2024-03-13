#include <stdio.h>
int i=0;
int displayArray(int a[], int size) {
    if(i<size) 
	{
        printf("%d ",a[i]);
        i++;
        displayArray(a,size);
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

    printf("Elements in the Array: ");
    displayArray(a, size);

    return 0;
}

