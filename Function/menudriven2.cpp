#include <stdio.h>

void findMax(int arr[], int size) 
{
    int max = arr[0];
    for (int i=1; i<size; i++) 
	{
        if(arr[i]>max) 
		{
            max = arr[i];
        }
    }
    printf("Max Element is: %d\n", max);
}

void findMin(int arr[], int size)
{
    int min = arr[0];
    for(int i=1; i<size; i++) 
	{
        if(arr[i]<min)
		{
            min = arr[i];
        }
    }
    printf("Minimum Element is: %d\n", min);
}

void revElement(int arr[], int size) 
{
   	int mid=size/2;
	int end=size-1;
	for(int i=0; i<mid; i++)
	{
		int temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
	}
	printf("After Reverse Array : \n");
	for(int i=0; i<size; i++){
		printf("%d\n",arr[i]);
	}
    printf("\n");
}

void findPrime(int arr[], int size) 
{
    printf("Prime Numbers: ");
    for(int i=1; i<size; i++) 
	{
        int num = arr[i];
        int flag = 1;
        for(int j=2; j<=num/2; j++) 
		{
            if(num%j == 0) 
			{
                flag = 0;
                break;
            }
        }
        if (flag == 1) 
            printf("%d ", num);
        
    }
    printf("\n");
}

void findEvenOdd(int arr[], int size) 
{
    printf("Even Numbers: ");
    for(int i=0; i<size; i++) 
	{
        if(arr[i]%2 == 0) 
            printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Odd Numbers: ");
    for(int i=0; i<size; i++) 
	{
        if(arr[i]%2 == 1) 
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void sumArray(int arr[], int size) 
{
    int sum = 0;
    for(int i=0; i<size; i++)
	{
        sum = sum + arr[i];
    }
    printf("Sum of Array Element is: %d\n", sum);
}

void removeDuplicate(int a[], int size) 
{
   	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j; k<size; k++)
				{
					a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
	}
	
	printf("\n\nArray After Removing Duplicate Numbers \n");
	for(int i=0; i<size; i++)
	{
		printf("%d  ",a[i]);
	}
}

int main() 
{
    int size, ch, op;
    printf("Enter Size of Array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Array Elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);

do{
        printf("OPERATION\n1. Find Max\n2. Find Min\n3. Reverse Element\n4. Find Prime Number\n5. Find Even Odd\n6. Sum Of Array Element\n7. Remove Duplicate\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);

    switch(ch) 
	{
        case 1:
            findMax(arr, size);
            break;

        case 2:
            findMin(arr, size);
            break;

        case 3:
            revElement(arr, size);
            break;

        case 4:
            findPrime(arr, size);
            break;

        case 5:
            findEvenOdd(arr, size);
            break;

        case 6:
            sumArray(arr, size);
            break;

        case 7:
            removeDuplicate(arr,size);
//            printf("Array after removing duplicates: ");
//            for(int i=0; i<size; i++) 
//			{
//                printf("%d ",arr[i]);
//            }
            printf("\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    printf("Do You Want to Continue? Type 'y' or 'Y' to continue: ");
    scanf(" %c", &op); 
        
    } while (op == 'y' || op == 'Y');

    return 0;
}

