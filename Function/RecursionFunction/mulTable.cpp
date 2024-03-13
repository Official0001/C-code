#include<stdio.h>
int i=1;
void mulTable(int n) {
    if (i>10) 
        return;
	else
	{
		printf("%d x %d = %d\n",n,i,n*i);
    i++;
    mulTable(n); 
	}
    
}

int main() 
{
    int num,result;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n",num);
	mulTable(num);
  
    return 0;
}

