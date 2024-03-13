#include <stdio.h>

int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Elements in the array:\n");
    for (int i=0; i<size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Element for each element:\n");

    for (int i=0; i<size; i++) 
	{
        int g =-1; 
        for (int j = i+1; j<size; j++) 
		{
            if (arr[j] > arr[i]) 
			{
                g = arr[j];
                break;
            }
        }
        printf("%d -> %d\n", arr[i],g);
    }

    return 0;
}

