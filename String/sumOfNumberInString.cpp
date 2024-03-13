#include<stdio.h>
int main()
{
    char str[50];
    int sum=0;

    printf("Enter String: ");
    gets(str);

    int i=0;
    while(str[i] != '\0') 
    {
        int num=0;

        while(str[i]>='0' && str[i]<='9')  // Check  character is a digit
        {
            num = num*10+(str[i] - '0');
            i++;
        }
        sum = sum + num;   // If a number is found, add it to the sum
        i++;   
    }
    printf("The sum of integers in the string is: %d\n", sum);
    
    return 0;
}

