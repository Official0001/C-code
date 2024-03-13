#include<stdio.h>

int main() {
    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);
    int a[size];
    printf("Enter Element in Array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
        
    int c=0;
    int nz=0;
    for(int i=0; i<size; i++) 
	{
        if(a[i]!=0) {
            a[nz]=a[i];
            nz++;			
        }
        else
        c++;
	}
	
	
	for(int i=0; )
	
    for(int i=size-c; i<size; i++) 
        a[i]=0;

    printf("Array After moving zeroes to the end: ");
    for(int i=0; i<size; i++) 
        printf("%d ", a[i]);
    
    return 0;
}

