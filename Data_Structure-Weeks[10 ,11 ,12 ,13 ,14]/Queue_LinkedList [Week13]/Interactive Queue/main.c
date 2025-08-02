#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Queue structure
typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Initialize queue
void init(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

// Check if queue is empty
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// Enqueue operation
void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }

    printf("%d enqueued successfully.\n", value);
}

// Dequeue operation
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Nothing to dequeue.\n");
        return -1;
    }

    Node* temp = q->front;
    int value = temp->data;

    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return value;
}

// Peek front element
int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->front->data;
}

// Free all nodes
void clear(Queue* q) {
    while (!isEmpty(q)) {
        dequeue(q);
    }
}

// Interactive Menu
void showMenu() {
    printf("\n------ Queue Menu ------\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Peek\n");
    printf("4. Check if Empty\n");
    printf("5. Exit\n");
    printf("------------------------\n");
    printf("Enter your choice: ");
}

int main() {
    Queue q;
    init(&q);

    int choice, value;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                value = dequeue(&q);
                if (value != -1)
                    printf("Dequeued: %d\n", value);
                break;
            case 3:
                value = peek(&q);
                if (value != -1)
                    printf("Front element: %d\n", value);
                break;
            case 4:
                printf("Queue is %s\n", isEmpty(&q) ? "Empty" : "Not Empty");
                break;
            case 5:
                printf("Exiting...Goodbye!\n");
                break;
            default:
                printf("Invald choice. Try again.\n");
        }

    } while (choice != 5);

    clear(&q);  // Free memory before exit
    return 0;
}
