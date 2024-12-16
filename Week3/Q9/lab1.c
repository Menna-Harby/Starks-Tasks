#include <stdio.h>
#include "lab1.h"

void calculate_average(int num1, int num2) {
    static int call_count = 0; 
    call_count++; 

    // Calc average
    float average = (num1 + num2) / 2.0;

    printf("Average of %d and %d: %.2f\n", num1, num2, average);
    printf("Function call count: %d\n", call_count);
}