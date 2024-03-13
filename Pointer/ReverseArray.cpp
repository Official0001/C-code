#include <stdio.h>

int main() {
    int a[5], len, temp = 0, mid, end, *ptr, *p1, *p2;
    len = sizeof(a)/sizeof(a[0]);
    ptr = &a[0];
    p1 = &mid;
    p2 = &end;

    printf("Enter 5 Elements: ");
    for (int i=0; i<len; i++) 
	{
        scanf("%d", ptr+i);
    }

    printf("Before Reverse Array:\n");
    for (int i=0; i<len; i++) 
	{
        printf("%d\n", *(ptr+i));
    }

    mid = len/2;
    end = len-1;

    for (int i=0; i<mid; i++)
	{
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + end);
        *(ptr + end) = temp;
        end--;
    }

    printf("After Reverse Array:\n");
    for (int i = 0; i < len; i++) 
	{
        printf("%d\n", *(ptr + i));
    }

    return 0;
}

