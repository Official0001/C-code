#include <stdio.h>

int main() {
    char a[20];
    int i, j, len = 0;

    printf("Enter String: ");
    gets(a);

    i = 0;
    while (a[i] != '\0') {
        len++;
        i++;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("After reverse: %s", a);

    return 0;
}

