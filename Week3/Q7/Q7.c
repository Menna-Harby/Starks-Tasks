#include <stdio.h>

int qualityPoints(float average) {
    if (average >= 90 && average <= 100) {
        return 4; // 90-100
    } 
	
	else if (average >= 80 && average < 90) {
        return 3; // 80-89
    } 
	
	else if (average >= 70 && average < 80) {
        return 2; // 70-79
    } 
	
	else if (average >= 60 && average < 70) {
        return 1; // 60-69
    } 
	
	else {
        return 0; // Below 60
    }
}

int main() {
    float average;

   
    printf("Enter the student's average: ");
    scanf("%f", &average);

    printf("Quality Points: %d\n", qualityPoints(average));

    return 0;
}