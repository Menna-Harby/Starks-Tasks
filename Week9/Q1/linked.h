#ifndef LINKED_H
#define LINKED_H

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Fun declarations
struct Node* createNode(int value);
void printMiddle(struct Node* head, int length);
void freeList(struct Node* head);

#endif
