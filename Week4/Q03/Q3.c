#include <stdio.h>

int main() {
    int n;

    printf("Enter the array lenght: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int biggest = array[0], smallest = array[0];
    int biggestPos = 0, smallestPos = 0;

    for (int i = 1; i < n; i++) {
        if (array[i] > biggest) {
            biggest = array[i];
            biggestPos = i;
        }
        if (array[i] < smallest) {
            smallest = array[i];
            smallestPos = i;
        }
    }

    printf("Biggest number: %d at position %d\n", biggest, biggestPos + 1);
    printf("Smallest number: %d at position %d\n", smallest, smallestPos + 1);

}