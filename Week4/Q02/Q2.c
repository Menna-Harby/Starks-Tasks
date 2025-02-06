#include <stdio.h>

int main() {
    int array[5][5];
    int rowSum[5] = {0};
    int colSum[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rowSum[i] += array[i][j];
        }
    }

    
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            colSum[j] += array[i][j];
        }
    }

    
    printf("Row Sum: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    printf("Column sum: ");
    for (int j = 0; j < 5; j++) {
        printf("%d ", colSum[j]);
    }
    printf("\n");

    return 0;
}