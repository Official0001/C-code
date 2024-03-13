#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int size1,size2,size3,i, *ptr1, *ptr2, *ptr3;

    printf("Enter Size Of Array 1: \n");
    scanf("%d",&size1);
    ptr1 = (int*)malloc(size1 * sizeof(int));
    printf("Enter First Array: \n");
    for (i=0; i<size1; i++) 
	{
        scanf("%d",(ptr1+i));
    }

    printf("Enter Size Of Array 2: ");
    scanf("%d",&size2);
    ptr2 = (int*)malloc(size2*sizeof(int));
    printf("Enter Second Array: \n");
    for (i=0; i<size2; i++) 
	{
        scanf("%d",(ptr2 + i));
    }

    size3 = size1+size2;
    ptr3 = (int*)malloc(size3 * sizeof(int));

    for (i=0; i<size1; i++) 
	{
        *(ptr3+i) = *(ptr1+i);
    }

    for (i=0; i<size2; i++) 
	{
        *(ptr3+size1+i) = *(ptr2+i);
    }

    printf("Merged Array is: \n");
    for (i=0; i<size3; i++) 
	{
        printf("%d\t", *(ptr3+i));
    }

    return 0;
}

