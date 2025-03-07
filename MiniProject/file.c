#include "file.h"
#include <stdio.h>
#include <string.h>

// Predefined data 
static Item items[MAX_ITEMS] = {
    {"Molto", 2.5, 10, 'S'},
    {"Coffee", 3.0, 5, 'H'},
    {"Cola", 2.0, 8, 'C'},
    {"Tea", 2.5, 7, 'H'},
    {"Biscuit", 1.5, 12, 'S'}
};

static Flavor flavors[MAX_FLAVORS] = {
    {"Mint", 0.5},
    {"Strawberry", 0.75},
    {"Vanilla", 0.5}
};

static Subscriber subscribers[MAX_SUBSCRIBERS] = {
    {"Menna", "132Menna", 50.0},
    {"Harby", "x12Harbi", 30.0}
};

static const char adminUsername[] = "mennaHarby";
static const char adminPassword[] = "1325900";


static float selectHotDrinkFlavors();
static void displayItems(int showQuantity);

// Admin funct
int adminLogin() {
    char username[50], password[50];
    printf("Admin Username: ");
    scanf("%s", username);
    printf("Admin Password: ");
    scanf("%s", password);
    return (strcmp(username, adminUsername) == 0 && strcmp(password, adminPassword) == 0);
}

void adminMenu() {
    int choice, index, newQty;
    while (1) {
        printf("\nAdmin Menu\n1. View Items\n2. Edit Quantity\n3. Exit\nSelect: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayItems(1);
                break;
            case 2:
                printf("Enter item index: ");
                scanf("%d", &index);
                if (index < 0 || index >= MAX_ITEMS) {
                    printf("Invalid index!\n");
                    break;
                }
                printf("New quantity: ");
                scanf("%d", &newQty);
                items[index].quantity = newQty;
                printf("Quantity updated!\n");
                break;
            case 3:
                return;
            default:
                printf("Invalid choice!\n");
        }
    }
}

// User funct
int userLogin(Subscriber **currentUser) {
    int choice;
    char name[50], password[50];
    printf("\nUser Login\n1. Subscriber\n2. Guest\nSelect: ");
    scanf("%d", &choice);
    if (choice == 2) {
        *currentUser = NULL; 
        return 1;
    } else if (choice == 1) {
        printf("Name: ");
        scanf("%s", name);
        printf("Password: ");
        scanf("%s", password);
        for (int i = 0; i < MAX_SUBSCRIBERS; i++) {
            if (strcmp(subscribers[i].name, name) == 0 && strcmp(subscribers[i].password, password) == 0) {
                *currentUser = &subscribers[i];
                return 1;
            }
        }
    }
    return 0;
}

void userMenu(Subscriber *user) {
    CartEntry cart[MAX_CART_ITEMS];
    int cartSize = 0;
    float total = 0;
    int choice, itemIndex;

    while (1) {
        printf("\nUser Menu\n1. View Menu\n2. Select Item\n3. Checkout\nSelect: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayItems(0);
                break;
            case 2:
                displayItems(0);
                printf("Enter item index: ");
                scanf("%d", &itemIndex);
                if (itemIndex < 0 || itemIndex >= MAX_ITEMS) {
                    printf("Invalid index!\n");
                    break;
                }
                if (items[itemIndex].quantity <= 0) {
                    printf("Out of stock!\n");
                    break;
                }
                cart[cartSize].itemIndex = itemIndex;
                cart[cartSize].itemPrice = items[itemIndex].price;
                cart[cartSize].flavorTotal = 0;
                if (items[itemIndex].type == 'H') {
                    cart[cartSize].flavorTotal = selectHotDrinkFlavors();
                }
                total += cart[cartSize].itemPrice + cart[cartSize].flavorTotal;
                cartSize++;
                printf("Added to cart. Total: $%.2f\n", total);
                break;
            case 3:
                if (cartSize == 0) {
                    printf("Cart is empty!\n");
                    break;
                }
                processPayment(user, total, cart, cartSize);
                return;
            default:
                printf("Invalid choice!\n");
        }
    }
}

// Payment 
void processPayment(Subscriber *user, float total, CartEntry cart[], int cartSize) {
    int paymentMethod;
    float cash;

    printf("\nTotal: $%.2f\n", total);
    if (user == NULL) { // Guest
        printf("Insert cash: $");
        scanf("%f", &cash);
        if (cash >= total) {
            printf("Payment successful. Change: $%.2f\n", cash - total);
            for (int i = 0; i < cartSize; i++) {
                items[cart[i].itemIndex].quantity--;
            }
        } else {
            printf("Insufficient cash!\n");
        }
    } else { // Subscriber
        printf("1. Cash\n2. Card (Balance: $%.2f)\nSelect: ", user->balance);
        scanf("%d", &paymentMethod);
        if (paymentMethod == 2) {
            if (user->balance >= total) {
                user->balance -= total;
                printf("Payment successful. New balance: $%.2f\n", user->balance);
                for (int i = 0; i < cartSize; i++) {
                    items[cart[i].itemIndex].quantity--;
                }
            } else {
                printf("Insufficient balance. Please use cash.\n");
                printf("Insert cash: $");
                scanf("%f", &cash);
                if (cash >= total) {
                    printf("Payment successful. Change: $%.2f\n", cash - total);
                    for (int i = 0; i < cartSize; i++) {
                        items[cart[i].itemIndex].quantity--;
                    }
                } else {
                    printf("Insufficient cash!\n");
                }
            }
        } else {
            printf("Insert cash: $");
            scanf("%f", &cash);
            if (cash >= total) {
                printf("Payment successful. Change: $%.2f\n", cash - total);
                for (int i = 0; i < cartSize; i++) {
                    items[cart[i].itemIndex].quantity--;
                }
            } else {
                printf("Insufficient cash!\n");
            }
        }
    }
}


static float selectHotDrinkFlavors() {
    float total = 0;
    int choice;
    printf("\nAvailable Flavors:\n");
    for (int i = 0; i < MAX_FLAVORS; i++) {
        printf("%d. %s - $%.2f\n", i, flavors[i].name, flavors[i].price);
    }
    do {
        printf("Select flavor (-1 to finish): ");
        scanf("%d", &choice);
        if (choice >= 0 && choice < MAX_FLAVORS) {
            total += flavors[choice].price;
            printf("Added %s. Flavor cost: $%.2f\n", flavors[choice].name, flavors[choice].price);
        }
    } while (choice != -1);
    return total;
}

static void displayItems(int showQuantity) {
    printf("\nMenu:\n");
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("%d. %s - $%.2f", i, items[i].name, items[i].price);
        if (showQuantity) printf(" (Qty: %d)", items[i].quantity);
        printf("\n");
    }
}
