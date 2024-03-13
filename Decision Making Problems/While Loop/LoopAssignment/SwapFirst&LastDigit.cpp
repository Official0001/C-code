#include <stdio.h>  
  #include<math.h>
int main() {  
    int number, firstDigit, lastDigit, temp, numOfDigits;  
  
printf("Enter a positive integer: ");  
scanf("%d", &number);  
  
    // Step 2: Calculate the number of digits in the given number  
numOfDigits = snprintf(NULL, 0, "%d", number);  
  
    // Step 3: Extract the first and last digits  
lastDigit = number % 10;  
firstDigit = number / pow(10, numOfDigits - 1);  
  
    // Step 6: Swap the first and last digits  
    temp = firstDigit;  
firstDigit = lastDigit;  
lastDigit = temp;  
  
    // Step 7: Construct the final swapped number  
    int swappedNumber = lastDigit * pow(10, numOfDigits - 1) + number % ((int)pow(10, numOfDigits - 1));  
  
printf("Swapped number: %d\n", swappedNumber);  
  
    return 0;  
}  
