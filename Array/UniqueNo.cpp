#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter Elements in Array: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
 
    printf("Unique Elements: \n");
    for(int i=0; i<5; i++) 
	{
        int flag=1; 
        for(int j=0; j<5; j++) 
		{
            if(i!=j && a[i]==a[j]) 
			{
                flag=0; 
                break;
            }
        }
        if(flag==0)
            printf("%d\n", a[i]);
    }

    return 0;
}

