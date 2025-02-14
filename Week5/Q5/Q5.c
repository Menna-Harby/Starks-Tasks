#include <stdio.h>

void sortArray(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n, i;

    printf("input Lenght of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    printf(" elements of arry in reverse order are :\n");
    for (i = n - 1; i >= 0; i--) {
        printf("element - %d : %d\n", i + 1, arr[i]);
    }

}