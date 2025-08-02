#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

void insert(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("%d inserted.\n", value);
}

void deleteAt(int pos) {
    if (!head) {
        printf("List is empty!\n");
        return;
    }

    if (pos == 0) {
        Node* toDelete = head;
        head = head->next;
        free(toDelete);
        printf("Deleted element at position 0.\n");
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next; i++) {
        temp = temp->next;
    }

    if (!temp->next) {
        printf("Invalid position!\n");
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
    printf("Deleted element at position %d.\n", pos);
}

int get(int pos) {
    Node* temp = head;
    for (int i = 0; temp && i < pos; i++) {
        temp = temp->next;
    }

    if (!temp) {
        printf("Invalid position!\n");
        return -1;
    }

    return temp->data;
}

void display() {
    printf("List elements: ");
    Node* temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main for testing
int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    deleteAt(1);
    display();

    printf("Element at position 1: %d\n", get(1));

    return 0;
}
