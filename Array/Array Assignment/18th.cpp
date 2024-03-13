#include<stdio.h>

int main() {
    int size,check;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements in Sorted Array:\n");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("Enter the integer to check: ");
    scanf("%d",&check);
    
    int count=0;
    for(int i=0; i<size; i++) 
	{
        if(arr[i] == check) {
            count++;
        }
    }
    printf("The given Value is : %d\n",check);
    if(count > size/2) 
        printf("%d appears more than %d times in the array.\n",check, size/2);
    else 
        printf("%d does not appear more than %d times in the array.\n",check, size/2);

    return 0;
}

