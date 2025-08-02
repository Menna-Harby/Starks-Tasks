#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

void init(Stack* s) {
    s->top = NULL;
}


int isEmpty(Stack* s) {
    return s->top == NULL;
}

void push(Stack* s, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));  // allocate new node
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = s->top;  
    s->top = newNode;        // update top
    printf("%d pushed to stack.\n", value);
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    Node* temp = s->top;
    int popped = temp->data;
    s->top = s->top->next;  // move top to next node
    free(temp);             
    return popped;
}

int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return s->top->data;
}

void clear(Stack* s) {
    while (!isEmpty(s)) {
        pop(s);
    }
}

// Main function to test stack
int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element: %d\n", peek(&s));

    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));

    printf("Is stack empty? %s\n", isEmpty(&s) ? "Yes" : "No");

    clear(&s); // Free remaining nodes (if any)
    return 0;
}
