#include<stdio.h>
int main()
{
	int a[12],len,temp=0,mid,end;
	len = sizeof(a)/sizeof a[0];
	
	printf("Enter 5 Element : ");
	for(int i=0; i<len; i++)
	{
		scanf("%d\n",&a[i]);
	}
	
	printf("Before Reverse Array : \n");
	for(int i=0; i<len; i++)
	{
		printf("%d\n",a[i]);
	}
	
	mid=len/2;
	end=len-1;
	
	for(int i=0; i<mid; i++)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}
	printf("After Reverse Array : \n");
	for(int i=0; i<len; i++){
		printf("%d\n",a[i]);
	}
	
	
	printf("\nDecode\n");
	for(int i=0; i<len; i++){
		
		a[i]=a[i]-4;
		printf("%c\n",a[i]);
	}
	
	
	
	
	
	return 0;
};

    // Step B: Reverse the array
    int n = sizeof(digits) / sizeof(digits[0]);
    for (int i = 0; i < n / 2; i++) {
        int temp = digits[i];
        digits[i] = digits[n - i - 1];
        digits[n - i - 1] = temp;
    }

    // Step C: Subtract 4 from each number and store at each index
    for (int i = 0; i < n; i++) {
        digits[i] -= 4;
    }

    // Step D: Convert the decoded numbers to characters and print
    for (int i = 0; i < n; i++) {
        printf("%c", (char)digits[i]);
    }

    printf("\n");

    return 0;
}

