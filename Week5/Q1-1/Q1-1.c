#include <stdio.h>
#include <stdlib.h>

int fun(int *n1, int *n2) {
    (*n1)++;
    (*n2)++;
    printf(" Inside function *n1 = %d, *n2 = %d\n", *n1, *n2);
}

int main() {
    int a = 5;
    int b = 6;
    int *p1 = &a;
    int *p2 = &b;

    printf(" Before calling the function, a = %d and b = %d\n", a, b);
    fun(&a, &b);
    printf(" After calling the function, a = %d and b = %d\n", a, b);
    return 0;
}
/* OUTPUT:
           Before calling the function, a = 5 and b = 6
           Inside function *n1 = 6, *n2 = 7
           After calling the function, a = 6 and b = 7
*/

/* WHY?:
         The function fun modifies the values of a and b directly through pointers, 
		 so the changes are reflected in the original variables in main.

         The output shows the values before the function call, inside the function, 
		 and after the function call,demonstrating how the values change due to the pointer manipulation.
*/

