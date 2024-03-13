#include <stdio.h>
int i=0;
int displayArray(int a[], int size, int sum) {
    if(i<size) 
	{
		sum =sum+a[i];
//        printf("%d ",sum);    
        i++;
        displayArray(a,size,sum);
    }
    else
    return sum;

    
}

int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);

    int a[size];
    printf("Enter Elements in the Array: ");
    for (int i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("sum : %d", displayArray(a, size,0));
   

    return 0;
}

