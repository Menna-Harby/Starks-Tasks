#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "client.h"

Client* head = NULL;

Client* createClient(int id, int numMembers) {
    Client* newClient = (Client*) malloc(sizeof(Client));
    newClient->id = id;
    newClient->numMembers = numMembers;
    newClient->members = (FamilyMember*) malloc(numMembers * sizeof(FamilyMember));
    newClient->next = NULL;

    for(int i = 0; i < numMembers; i++) {
        printf("Enter the family member name: ");
        scanf("%s", newClient->members[i].name);
        printf("Enter the family member money: ");
        scanf("%f", &newClient->members[i].money);
    }

    return newClient;
}

void addClient() {
    int id, numMembers;
    printf("Enter ID: ");
    scanf("%d", &id);

    if(findClientById(id) != NULL) {
        printf("Client with ID %d already exists!\n", id);
        return;
    }

    printf("Enter number of family members: ");
    scanf("%d", &numMembers);

    Client* newClient = createClient(id, numMembers);

    newClient->next = head;
    head = newClient;
}

void listClients() {
    if(head == NULL) {
        printf("There is no client yet.\n");
        return;
    }

    Client* temp = head;
    while(temp != NULL) {
        printf("Client ID: %d\n", temp->id);
        for(int i = 0; i < temp->numMembers; i++) {
            printf("\tMember: %s\n", temp->members[i].name);
            printf("\tMoney: %.2f\n", temp->members[i].money);
        }
        temp = temp->next;
    }
}

Client* findClientById(int id) {
    Client* temp = head;
    while(temp != NULL) {
        if(temp->id == id)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void editClient() {
    int id;
    printf("Enter client ID to edit: ");
    scanf("%d", &id);

    Client* client = findClientById(id);
    if(client == NULL) {
        printf("Client with ID %d not found!\n", id);
        return;
    }

    int newNum;
    printf("Enter new number of family members: ");
    scanf("%d", &newNum);

    free(client->members);
    client->members = (FamilyMember*) malloc(newNum * sizeof(FamilyMember));
    client->numMembers = newNum;

    for(int i = 0; i < newNum; i++) {
        printf("Enter the family member name: ");
        scanf("%s", client->members[i].name);
        printf("Enter the family member money: ");
        scanf("%f", &client->members[i].money);
    }

    printf("Client data updated successfully.\n");
}

void freeClients() {
    Client* temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        free(temp->members);
        free(temp);
    }
}
