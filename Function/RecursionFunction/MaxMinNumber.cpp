#include <stdio.h>
int i=0;
int displayMax(int a[], int size, int max) {
    if(i<size) 
	{
		if(max<a[i])
		{
			max=a[i];
		}
        i++;
        displayMax(a,size,max);
    }
    else
    return max;
}

int displayMin(int a[], int size, int min) {
    if(i<size) 
	{
		if(min>a[i])
		{
			min=a[i];
		}
        i++;
        displayMax(a,size,min);
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

    printf("Max : %d", displayMax(a, size,0));
    printf("\n");
    printf("Min : %d", displayMin(a, size,a[0]));
   

    return 0;
}

