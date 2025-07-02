#include <stdio.h>
#include "linked.h"

int main() {
    while (1) {
        int length, value;
        struct Node *head = NULL, *tail = NULL;

        printf("Enter the list length : ");
        scanf("%d", &length);

        if (length <= 0) {
            printf("Length must be positive!\n");
            continue;
        }

        for (int i = 0; i < length; i++) {
            printf("Enter %dth node value : ", i + 1);
            scanf("%d", &value);

            struct Node* newNode = createNode(value);

            if (head == NULL) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        printMiddle(head, length);
        freeList(head);
    }

    return 0;
}
