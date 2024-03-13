#include<stdio.h>
int size,digit;
int isDuck(int n) {
    if(n==0) 
        return 0;
        
        digit= n%10;
    
 	if(digit==0) 
        return 1;
    	
    return isDuck(n/10);
}

void findDuckNumbers(int a[],int size,int i) {
    if(i<size) 
	{
        if(isDuck(a[i])) {
            printf("%d\t",a[i]);
        }
        
    findDuckNumbers(a,size,i+1);
    }
}

int main() 
{    
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    int no[size];
    printf("Enter values into array: ");
    for(int i=0; i<size; i++)
    scanf("%d",&no[i]);
    
    printf("Duck Numbers : \n");
    findDuckNumbers(no,size,0);

    return 0;
}

