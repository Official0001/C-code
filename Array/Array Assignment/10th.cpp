#include <stdio.h>

int main() {
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter Element in Array : ");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Array Element  : ");
    for (int i = 0; i < size; i++)
        printf("%d  ", a[i]);

    int majorityElement = -1, count = 0;
    
    for (int i=0; i<size; i++) 
	{
        int temp = a[i];
        int tempCount = 1;

        for (int j = i + 1; j < size; j++) 
		{
            if (temp == a[j]) 
			{
                tempCount++;
            }
        }
        if (tempCount > count) {
            count = tempCount;
            majorityElement = temp;
        }
    }

    if (count>size/2)
	{
    	printf("\n%d is the majority element\n", majorityElement);
        printf("It occurred %d times",count);
	}
        
    else
        printf("\nNo majority element.");

    return 0;
}

