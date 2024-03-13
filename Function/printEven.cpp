 #include <stdio.h>
void printEven(int x, int n) {
    if (x>n) 
        return;
    else 
	{
        if(x%2==0) {
            printf("%d  ", x);
        }
        printEven(x + 1, n);
    }
}

int main() 
{
    int num = 100;
    int a = 1;
    printf("Even numbers between %d and %d:\n", a, num);
    printEven(a, num);

    return 0;
}

