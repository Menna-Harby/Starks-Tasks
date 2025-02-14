#include <stdio.h>

void calculateFactorial(int *num, unsigned long long *result) {
    *result = 1; 
    for (int i = 1; i <= *num; i++) {
        *result *= i; 
    }
}

int main() {
    int number;
    unsigned long long factorial;

    printf("enter number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        calculateFactorial(&number, &factorial);
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}