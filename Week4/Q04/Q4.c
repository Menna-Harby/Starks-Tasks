#include <stdio.h>

int main() {
    int numbers[10];
    int sumEven = 0;
    long long productOdd = 1; 

    printf("Enter ten numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            productOdd *= numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Product of odd numbers: %lld\n", productOdd);

}