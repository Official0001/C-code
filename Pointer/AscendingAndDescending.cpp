#include <stdio.h>

int main() {
    int a[5], temp, *ptr;
    ptr = &a[0];

    printf("Enter Elements in the Array: \n");

    for (int i=0; i<5; i++) {
        scanf("%d", &*ptr+i);
    }

    for (int i=0; i<5; i++)
	{
        for (int j=i+1; j<5; j++)
		{
            if (*(ptr+i) > *(ptr+j)) 
			{
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    } 
    printf("\nAscending Order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d  ", *(ptr + i));
    }
    
    
    for (int i=0; i<5; i++)
	{
        for (int j=i+1; j<5; j++)
		{
            if (*(ptr+i) < *(ptr+j)) 
			{
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    printf("\nDescending Order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d  ", *(ptr + i));
    }

    return 0;
}

