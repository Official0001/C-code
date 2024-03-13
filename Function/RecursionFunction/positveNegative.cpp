 #include<stdio.h>
void findPositive(int a[], int len, int i) {
    if(i<len) 
	{
        if(a[i]>0)
            printf("%d ",a[i]);

        findPositive(a,len,i+1);
    }
}

void findNegative(int a[], int len, int i) {
    if(i<len) 
	{
        if(a[i]<0)
            printf("%d ",a[i]);

        findNegative(a,len,i+1);
    }
}

int main() {
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter Elements in Array: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("Positive Numbers: ");
    findPositive(arr,size,0);
    printf("\nNegative Numbers: ");
    findNegative(arr,size,0);

    return 0;
}

