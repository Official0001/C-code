#include <stdio.h>

int main() {
	int size;
	printf("Enter Size of Square Matrix : ");
	scanf("%d",&size);
    int a[size][size];
    printf("Enter Elements in Matrix:\n");
    for (int i=0; i<size; i++) 
	{
        for (int j=0; j<size; j++) 
		{
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for (int i=0; i<size; i++) 
	{
        for (int j=0; j<size; j++) 
		{
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

	printf("Transpose Of Matrix is : \n");
	for (int i=0; i<size; i++) 
	{
        for (int j=0; j<size; j++) 
		{
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

