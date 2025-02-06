#include <stdio.h>

int main() {
    char str[100], replaceChar;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input replace character: ");
    scanf("%c", &replaceChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = replaceChar;
        }
    }

    printf("After replacing the space with %c:\n%s", replaceChar, str);

}