#include <stdio.h>

int main() {
    char str[100], ch;
    int frequency = 0;

    printf("Input string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input the char: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            frequency++;
        }
    }

    printf("The freq of '%c' is: %d\n", ch, frequency);

}