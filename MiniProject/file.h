#ifndef BREAKFAST_MACHINE_H
#define BREAKFAST_MACHINE_H

// Constants
#define MAX_ITEMS 10
#define MAX_FLAVORS 5
#define MAX_SUBSCRIBERS 5
#define MAX_CART_ITEMS 10


typedef struct {
    char name[50];
    float price;
    int quantity;
    char type; // 'S' (snack), 'H' (hot), 'C' (cold)
} Item;

typedef struct {
    char name[50];
    float price;
} Flavor;

typedef struct {
    char name[50];
    char password[50];
    float balance;
} Subscriber;

typedef struct {
    int itemIndex;
    float itemPrice;
    float flavorTotal;
} CartEntry;

// Funct prototypes
int adminLogin();
void adminMenu();
int userLogin(Subscriber **currentUser);
void userMenu(Subscriber *currentUser);
void processPayment(Subscriber *user, float total, CartEntry cart[], int cartSize);

#endif