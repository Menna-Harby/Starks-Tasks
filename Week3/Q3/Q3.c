#include <stdio.h>

void decimalToBinary(int n) {
    
    int binary[32]; // maximum of 32 bits for the binary representation
    int index = 0;

    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (n > 0) {                                           // 5               
        binary[index] = n % 2; // the remainder (0 or 1)      // binary[0]= 1      // binary[1] = 0     //  binary[2] = 1    
        n = n / 2;                                            // 2                 // 1                 // 0 
        index++; 
    }

    // print in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}