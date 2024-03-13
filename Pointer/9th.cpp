#include <stdio.h>

int main() {
    int size, sum;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<size; i++) 
	{
        scanf("%d",&arr[i]);
    }

    printf("Enter Sum Of Pair: ");
    scanf("%d", &sum);

    int flag=0;
	printf("Pairs with sum %d are:\n", sum);
    for (int i=0; i<size; i++) 
	{
        for (int j=i+1; j<size; j++) 
		{
            if (arr[i]+arr[j] == sum) 
			{
                printf("(%d, %d)\n",arr[i],arr[j]);
                flag=1;
            }
        }
    }

    if (flag==0) {
        printf("No pairs found with the given sum.\n");
    }

    return 0;
}

