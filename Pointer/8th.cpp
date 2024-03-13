#include <stdio.h>

int main() {
    int size,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i=0; i<size; i++)
	{
        scanf("%d", &arr[i]);
    }

    int l=arr[0];
    int sL=arr[0];

    for (i=1; i<size; i++) 
	{
        if (arr[i]>l) 
		{
            sL = l;
            l=arr[i];
        } 
		else if (arr[i]>sL && arr[i]<l) 
		{
            sL=arr[i];
        }
    }
    printf("Second largest element is: %d\n", sL);

    return 0;
}

