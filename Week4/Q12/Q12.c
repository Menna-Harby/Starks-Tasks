#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Mini: %d\n", min);
    printf("Maxi: %d\n", max);

}