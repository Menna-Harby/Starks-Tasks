// main.c
#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    
    printf("=== Smple Macro Calculator ===\n");
    printf("1. Perform operation on two numbers\n");
    printf("2. Calculate sum of array\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int a, b,result;
        char op;

        printf("Enter first number: ");
        scanf("%d", &a);
		
		printf("Enter second number: ");
        scanf("%d", &b);

		
		printf("Choose operation (+, -, *, /): ");
        scanf(" %c", &op);  
       
        switch (op) {
            case '+':
                result = ADD(a, b);
                break;
            case '-':
                result = SUB(a, b);
                break;
            case '*':
                result = MUL(a, b);
                break;
            case '/':
                result = DIV(a, b);
                break;
            default:
                printf("Invalid operator.\n");
                return 1;
        }
		

        printf("Result: %d %c %d = %d\n", a, op, b, result);
    } 
    else if (choice == 2) {
        int size;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &size);

        int arr[size];
        for (int i = 0; i < size; i++) {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        int total = SUM_ARRAY(arr, size);
        printf("Sum of array elements = %d\n", total);
    } 
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
