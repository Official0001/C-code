#include <stdio.h>

int main() {
	
    printf("Uppercase Vowels:\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c\t", c);
        }
    }

    printf("\n\nUppercase Consonants:\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            printf("%c\t", c);
        }
    }

    printf("\n\n\nLowercase Vowels:\n");
    for (char c = 'a'; c <= 'z'; c++) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("%c\t", c);
        }
    }

    printf("\n\nLowercase Consonants:\n");
    for (char c = 'a'; c <= 'z'; c++) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c\t", c);
        }
    }

    return 0;
}

