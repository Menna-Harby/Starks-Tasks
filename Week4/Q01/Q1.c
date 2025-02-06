#include <stdio.h>
#include <stdbool.h>

bool SameDigit(int num) {
    int digitCount[10] = {0}; 

    while (num > 0) {
        int digit = num % 10; 
        digitCount[digit]++; 
        if (digitCount[digit] > 1) {
            return true;
        }
        num /= 10; 
    }

    return false; 
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (SameDigit(num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

}