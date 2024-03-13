#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter String : ");
    gets(str);
    
    printf("Original String: %s\n", str);
    
    int length = strlen(str);
    int start=0;

    for(int i=0; i<=length; i++) 
	{
        if(str[i] == ' ' || str[i] == '\0') 
		{
            int end=i-1;

            while(start<end)   // Reverse the current word
			{
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start=i+1;    // Move to the next word
        }
    }
    printf("Reversed Words in String : %s\n", str);

    return 0;
}

