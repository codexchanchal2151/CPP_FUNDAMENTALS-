#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.00, amount;

    printf("--- ATM Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Cash\n");
    printf("3. Withdraw Cash\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your current balance is: $%.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Successfully deposited $%.2f. New Balance: $%.2f\n", amount, balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Successfully withdrawn $%.2f. Remaining Balance: $%.2f\n", amount, balance);
            } else {
                printf("Invalid or insufficient funds for withdrawal.\n");
            }
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please select a valid option from the menu.\n");
    }

    return 0;
}
