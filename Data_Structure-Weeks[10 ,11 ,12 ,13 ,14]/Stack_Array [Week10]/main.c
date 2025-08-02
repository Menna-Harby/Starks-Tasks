#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void init(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX_SIZE - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
    } else {
        s->items[++(s->top)] = value;
        printf("%d pushed to stack.\n", value);
    }
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return s->items[(s->top)--];
    }
}

int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1;
    } else {
        return s->items[s->top];
    }
}

int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element: %d\n", peek(&s));

    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));

    printf("Is stack empty? %s\n", isEmpty(&s) ? "Yes" : "No");

    return 0;
}
