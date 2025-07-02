#include <stdio.h>
#include <stdlib.h>
#include "linked.h"

// Crete new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Print middle element
void printMiddle(struct Node* head, int length) {
    struct Node* temp = head;
    int i;

    if (length % 2 == 0) {
        int mid1 = length / 2 - 1;
        int mid2 = length / 2;
        for (i = 0; i < mid1; i++) {
            temp = temp->next;
        }
        printf("Middle Element 1 = %d\n", temp->data);
        printf("Middle Element 2 = %d\n", temp->next->data);
    } else {
        int mid = length / 2;
        for (i = 0; i < mid; i++) {
            temp = temp->next;
        }
        printf("Middle Element = %d\n", temp->data);
    }
}

// Free all nodes
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
