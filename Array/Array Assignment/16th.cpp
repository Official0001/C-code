#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
	int arr[size];
    printf("Enter Elements in Array : ");
    for(int i=0; i<size; i++) 
    scanf("%d",&arr[i]);

    int min1Pair=arr[0];
    int min2Pair=arr[1];
    int minSum = min1Pair + min2Pair;

    for(int i=0; i<size; i++) 
	{
        for(int j=i+1; j<size; j++) 
		{
            int sum = arr[i] + arr[j];
          
            if(sum<=minSum) 
			{
                minSum = sum;
                min1Pair = arr[i];
                min2Pair = arr[j];
            }
        }
    }
    printf("Pair of Elements whose sum is Minimum are: [%d, %d]\n", min1Pair, min2Pair);


    return 0;
}

