#ifndef CLIENT_H
#define CLIENT_H

typedef struct {
    char name[100];
    float money;
} FamilyMember;

typedef struct Client {
    int id;
    int numMembers;
    FamilyMember* members;
    struct Client* next;
} Client;

extern Client* head;

Client* createClient(int id, int numMembers);
void addClient();
void listClients();
Client* findClientById(int id);
void editClient();
void freeClients();

#endif
