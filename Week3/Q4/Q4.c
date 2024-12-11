#include <stdio.h>

int perfect(int number) {                      // 28
    int sum_of_factors = 0;
                                    // find factors
    for (int i = 1; i < number; i++) {          //   1            2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  
        if (number % i == 0) {                  // 28 % 1 = 0     0     0        0                        0
            sum_of_factors += i;                //   1     +      2  +  4    +   7           +            14   = 28 
        }
    }

    return sum_of_factors == number;
}


int main() {
    printf("Perfect numbers between 1 and 100:\n");
    
    for (int num = 1; num <= 100; num++) {
        if (perfect(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}