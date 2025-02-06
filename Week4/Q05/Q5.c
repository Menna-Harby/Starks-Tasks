#include <stdio.h>

int main() {
    int num, reversedNumber = 0, originalNumber, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNumber = num;


    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

}