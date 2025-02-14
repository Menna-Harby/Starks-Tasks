#include <stdio.h>
#include <string.h>

int findFirstOccurrence(char *source, char *search) {
    int sourceLen = strlen(source);
    int searchLen = strlen(search);

    for (int i = 0; i <= sourceLen - searchLen; i++) {
        int j;
        for (j = 0; j < searchLen; j++) {
            if (source[i + j] != search[j]) {
                break;
            }
        }
        if (j == searchLen) {
            return i;
        }
    }
    return -1; // if no occurrence is found
}

int main() {
    char source[100], search[100];

    printf("Enter source string : ");
    scanf("%s", source);

    printf("Enter search string : ");
    scanf("%s", search);

    int index = findFirstOccurrence(source, search);

    if (index != -1) {
        printf("First occurence of %s at index : %d\n", search, index);
    } else {
        printf("No occurence of %s found in the source string.\n", search);
    }

    return 0;
}