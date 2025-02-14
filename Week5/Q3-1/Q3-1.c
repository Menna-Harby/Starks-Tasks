#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1000;
    char *ptr = &x;
    ptr = ptr + 1;
    printf("%d %d", x, *ptr);
}

/* OUTPUT:
          1000 3
*/

/*  WHY?:
         - The first %d prints the value of x, which is 1000.
         - The second %d prints the value of the second byte of x after the pointer ptr is incremented by 1. 
		   On a little-endian system, the integer 1000 (0x3E8 in hexadecimal) is stored in memory as E8 03 00 00. 
		   After incrementing ptr by 1, it points to the second byte, which is 03. Therefore, *ptr is 3.
*/