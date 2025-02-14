#include <stdio.h>

int main() {
    int n, i;

    printf("Index Of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Element of array :\n");
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The Element of array in reverse order :\n");
    for (i = n - 1; i >= 0; i--) {
        printf("element - %d : %d\n", n - i, arr[i]);
    }

    return 0;
}