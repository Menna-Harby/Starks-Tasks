#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} List;

void init(List* list) {
    list->size = 0;
}
void insert(List* list, int value) {
    if (list->size == MAX_SIZE) {
        printf("List is full!\n");
        return;
    }
    list->data[list->size++] = value;
    printf("%d inserted.\n", value);
}

void deleteAt(List* list, int pos) {
    if (pos < 0 || pos >= list->size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->size--;
    printf("Element at position %d deleted.\n", pos);
}

int get(List* list, int pos) {
    if (pos < 0 || pos >= list->size) {
        printf("Invalid position!\n");
        return -1;
    }
    return list->data[pos];
}

void display(List* list) {
    printf("List elements: ");
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    List list;
    init(&list);

    insert(&list, 10);
    insert(&list, 20);
    insert(&list, 30);
    display(&list);

    deleteAt(&list, 1);
    display(&list);

    printf("Element at position 0: %d\n", get(&list, 0));

    return 0;
}
