#include <stdio.h>

int main() {
    int a[2][2];
    printf("Enter Elements in Matrix:\n");
    for (int i=0; i<2; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for (int i=0; i<2; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Rows and Columns:\n");
    for(int i=0; i<2; i++) 
	{
        int rowSum=0;
        int colSum=0;
        printf("Row %d: ",i + 1);
        for (int j=0; j<2; j++) 
		{
            printf("%d  ",a[i][j]);
            rowSum = rowSum+a[i][j];
            colSum = colSum+a[j][i];
        }
        printf("\tSum of Row: %d\tSum of Column: %d\n", rowSum, colSum);
    }

    return 0;
}

