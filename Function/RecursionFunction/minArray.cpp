#include <stdio.h>
int i=0;
int displayArray(int a[], int size,int min) {
    if(i<size) 
	{
		if(min>a[i])
		{
			min=a[i];
		}
        i++;
        displayArray(a,size,min);
    }
    else
    return min;
    
    
}

int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);

    int a[size];
    printf("Enter Elements in the Array: ");
    for (int i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("Min : %d", displayArray(a, size,a[0]));
   

    return 0;
}

