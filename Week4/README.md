# Week 4: **Array & String**

## **Code Explanation from Tasks**  

### 1. **`include <time.h>`**
header file in C is part of the C Standard Library and provides functions and types for manipulating date and time. It is commonly used for tasks such as getting the current time, measuring time intervals, and formatting time values.

### 2. **`srand(time(0));`** 
Seeds the random number generator with the current time to ensure different random grades each time the program runs.

### 3. **`classes[i][j] = rand() % (MAX_GRADE + 1);`** 
Generates a random grade between 0 and 100.
