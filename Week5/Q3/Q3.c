#include <stdio.h>

void calculateOperations(int num1, int num2, int *sum, int *diff, int *prod) {
    *sum = num1 + num2;
    *diff = num1 - num2;
    *prod = num1 * num2;
}

int main() {
    int number1, number2;
    int sum, difference, product;

    printf("Enter the number 1: ");
    scanf("%d", &number1);

    printf("Enter the number 2: ");
    scanf("%d", &number2);

    calculateOperations(number1, number2, &sum, &difference, &product);

    printf("Sum = %d, Difference = %d, Product = %d\n", sum, difference, product);

    return 0;
}