#include "file.h"
#include <stdio.h>

int main() {
    int choice;
    Subscriber *currentUser = NULL;

    while (1) {
        printf("\n===== Breakfast Machine =====\n");
        printf("1. Admin Login\n2. User Login\n3. Exit\nSelect: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (adminLogin()) {
                    adminMenu();
                } else {
                    printf("Invalid admin credentials!\n");
                }
                break;
            case 2:
                if (userLogin(&currentUser)) {
                    userMenu(currentUser);
                } else {
                    printf("Invalid user credentials!\n");
                }
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
