#include <stdio.h>

int main() {
    int n;

    printf("Enter array length: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Unique elements in the array are: ");
    for (int i = 0; i < n; i++) {
        int isUnique = 1; 
        for (int j = 0; j < n; j++) {
            if (i != j && array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

}