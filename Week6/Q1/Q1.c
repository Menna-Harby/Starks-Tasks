#include <stdio.h>

// Difine
struct Employee {
    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3]; 
    char *names[] = {"Ahmed", "Waleed", "Amr"};
    float total_amount = 0;

    // get input
    for (int i = 0; i < 3; i++) {
        printf("Enter salry, bonus, and deductions for %s:\n", names[i]);
        scanf("%f %f %f", &employees[i].salary, &employees[i].bonus, &employees[i].deductions);
    }

    
    for (int i = 0; i < 3; i++) {
        total_amount += (employees[i].salary + employees[i].bonus - employees[i].deductions);
    }


    printf("Total amount to be supplied by finance: %.2f\n", total_amount);

    return 0;
}
