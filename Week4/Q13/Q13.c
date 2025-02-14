#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int classes[3][10];
    int passed = 0, failed = 0;
    int highest = 0, lowest = 100;
    float total = 0;
    int totalStudents = 3 * 10;

    // Seed the random number generator
    srand(time(0));

    // Populate the arrays with random grades
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            classes[i][j] = rand() % (100 + 1);
            total += classes[i][j];

            if (classes[i][j] >= 50) {
                passed++;
            } else {
                failed++;
            }

            if (classes[i][j] > highest) {
                highest = classes[i][j];
            }
            if (classes[i][j] < lowest) {
                lowest = classes[i][j];
            }
        }
    }

    // Calculate the average grade
    float average = total / totalStudents;

    printf("Num of passed students: %d\n", passed);
    printf("Num of failed students: %d\n", failed);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);
    printf("Average grade: %.2f\n", average);

    return 0;
}