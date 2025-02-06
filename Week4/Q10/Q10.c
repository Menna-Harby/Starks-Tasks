#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int isEqual = 1; 
    int len1 = 0, len2 = 0;

    printf("imput 1st string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("input the 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0' && str1[len1] != '\n') {
        len1++;
    }

    while (str2[len2] != '\0' && str2[len2] != '\n') {
        len2++;
    }

    if (len1 != len2) {
        isEqual = 0;
    } else {
        for (int i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                isEqual = 0;
                break;
            }
        }
    }

    printf("String1: %s", str1);
    printf("String2: %s", str2);
    if (isEqual) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings not equal.\n");
    }

}