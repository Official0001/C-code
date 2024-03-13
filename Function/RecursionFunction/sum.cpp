#include<stdio.h>
int sum(int n){
    if(n!=0) 
        return n+sum(n-1);
    else
        return 0; 
}

int main() 
{
    int num,result; 
    printf("Enter Number : ");
    scanf("%d",&num);

    result=sum(num);
    printf("Sum Of Natural Numbers : %d",result); 

    return 0;
}

