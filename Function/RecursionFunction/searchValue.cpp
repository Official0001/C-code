#include <stdio.h>
int searchElement(int arr[], int size, int skey, int i) {
    if(i<size) 
    {
    	if(arr[i]==skey) {
			return 1; 
		}
    	return searchElement(arr,size,skey,i+1);
	}
	else
	return 0;
    
}

int main() {
    int size, sValue;

    printf("Enter Size Of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Elements in Array: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("Enter Search Value: ");
    scanf("%d",&sValue);

    if(searchElement(arr, size, sValue, 0))
        printf("Found\n");
    else 
        printf("Not Found\n");
    

    return 0;
}

