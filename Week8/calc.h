
#ifndef CALC_H
#define CALC_H

// === basic operations ===
#define ADD(x, y)       ((x) + (y))
#define SUB(x, y)       ((x) - (y))
#define MUL(x, y)       ((x) * (y))
#define DIV(x, y) (((y) != 0) ? ((x) / (y)) : (printf("Division by zero error!\n"), 0)) // Handle divide by zero

// === sum of array ===
                             // arr: array name
#define SUM_ARRAY(arr, size)           \
    ({                                 \
        int sum = 0;                   \
        for (int i = 0; i < (size); i++) { \
            sum += (arr)[i];           \
        }                              \
        sum;                           \
    })

#endif
