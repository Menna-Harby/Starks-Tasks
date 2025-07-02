#include <stdio.h>
#include "client.h"

int main() {
    int choice;
    int run = 1;

    while(run) {
        printf("****Welcome****\n");
        printf("1- List Clients\n");
        printf("2- Add New Client\n");
        printf("3- Edit Existing Client\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch(choice) {
            case 1:
                listClients();
                break;
            case 2:
                addClient();
                break;
            case 3:
                editClient();
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("Run again?\n1-yes\n2-no\n");
        scanf("%d", &run);
    }

    freeClients();
    return 0;
}
