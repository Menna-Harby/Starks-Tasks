#include <stdio.h>

int main() {
    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = alphabets;

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}