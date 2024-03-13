#include<stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5]; 

    int *Ptr1 = a;
    int *Ptr2 = b;

    for (int i=0; i<5; i++)
	{
        *(Ptr2+i) = *(Ptr1+i);
    }

    printf("Original Array: ");
    for (int i=0; i<5; i++)
	{
        printf("%d ", *(Ptr1+i));
    }

    printf("\nCopy Array: ");
    for (int i=0; i<5; i++) 
	{
        printf("%d ", *(Ptr2+i));
    }

    return 0;
}

