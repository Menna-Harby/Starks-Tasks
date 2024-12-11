#include <stdio.h>
#include <stdbool.h>

int is_prime(int number) {
    
    if (number <= 1) {
        return 0; 
    }
	
    if (number == 2) {
        return 1; 
    }
	
    if (number % 2 == 0) {
        return 0; 
    }
                   
    for (int i = 3; i * i <= number; i += 2) {           // Check divisors up to sqrt(number)
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    
    if (is_prime(num)== 1) {
        printf("%d is a prime number.\n", num);
    } 
	
	else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}