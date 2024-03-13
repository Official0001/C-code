#include<stdio.h> 
int size, i=0, j=0, count=0, k=1 ; 
int iscount(int n) {
    if(k<=n)
	{
		if(n%k == 0)
		count++;
		
		k++; 
		iscount(n);
	} 
    return count;
}

void findPrimes(int a[]) {
    if(i<size) 
	{
		count=0;
		
        if(iscount(a[i]) == 2) 
            printf("%d\t",a[i]);
        
        k=1; 
        i++;
        findPrimes(a);
    }
}

int main() {
    int no[5];
    size = sizeof(no)/sizeof(int);
    printf("Enter values into array : ");
    for(int i=0; i<size; i++)
    scanf("%d",&no[i]);
    i=0;
    findPrimes(no);
    
    return 0;
}

