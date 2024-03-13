#include <stdio.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, reversedNum = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for reference
    originalNum = num;

    // Extract the last digit
    lastDigit = num % 10;

    // Remove the last digit
    num = num / 10;

    // Extract the first digit using a while loop
    while (num != 0) {
        firstDigit = num % 10;
        num = num / 10;
    }

    // Swap the first and last digits
    reversedNum = lastDigit;
    
    int temp = originalNum % 10; // Store the last digit of the original number
    
    reversedNum = reversedNum * 10 + firstDigit; // Add the first digit to the reversed number
    
    originalNum = (originalNum - lastDigit) / 10; // Remove the last digit from the original number
    
    originalNum = originalNum * 10 + temp; // Add the last digit to the original number

    // Print the number with swapped first and last digits
    printf("Number with first and last digits swapped: %d\n", originalNum);

    return 0;
}

