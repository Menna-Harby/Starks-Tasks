#include <stdio.h>

float smallestOfThree(float num1, float num2, float num3) {
	
    float smallest = num1; 
	
    if (num2 < smallest) {
        smallest = num2; 
    }
    if (num3 < smallest) {
        smallest = num3; 
    }

    return smallest; 
}


int main() {
    float a, b, c;

   
    printf("Enter three floating-point numbers:\n");
	
    printf("Number 1: ");
    scanf("%f", &a);
	
    printf("Number 2: ");
    scanf("%f", &b);
	
    printf("Number 3: ");
    scanf("%f", &c);


    float smallest = smallestOfThree(a, b, c);

    printf("The smallest number is: %.2f\n", smallest);

    return 0;
}