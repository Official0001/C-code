#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the length of side 1: ");
    scanf("%d", &a);
    printf("Enter the length of side 2: ");
    scanf("%d", &b);
    printf("Enter the length of side 3: ");
    scanf("%d", &c);

	(a + b <= c || a + c <= b || b + c <= a) ? printf("INVALID TRIANGLE"):printf("VALID TRIANGLE");
	

	return 0;

}
