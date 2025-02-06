#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Input the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Input the second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++);
    str1[i] = '\0'; 

    for (j = 0; str2[j] != '\0' && str2[j] != '\n'; j++);
    str2[j] = '\0'; 


    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }
    str1[i + j] = '\0'; 

    printf("after concatenation the string is:\n%s\n", str1);

}