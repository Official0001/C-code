#include<stdio.h>
int main() 
{
    int array1[3][3], array2[3][2], c[2][2];

    printf("Enter Elements of 1st Matrix:\n");
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<3; j++) 
            scanf("%d", &array1[i][j]);
        
    }

    printf("Enter Elements of 2nd Matrix:\n");
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<2; j++) 
            scanf("%d", &array2[i][j]);
    }

    printf("1st Matrix is :\n");
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<3; j++) 
		{
            printf("%d  ", array1[i][j]);
        }
        printf("\n");
    }

    printf("2nd Matrix is :\n");
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            printf("%d  ",array2[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication Matrix is :\n");
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            int sum=0;
            for (int k=0; k<3; k++) {
                sum = sum+array1[i][k]*array2[k][j];
            }
            c[i][j] = sum;
        }
    }

    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}


