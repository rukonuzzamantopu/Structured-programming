#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

void createAccount() {
    Account account;
    FILE *file;

    printf("Enter your name: ");
    scanf("%s", account.name);
    printf("Enter your password: ");
    scanf("%s", account.password);
    account.balance = 0.0;

    file = fopen("users.dat", "ab");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fwrite(&account, sizeof(Account), 1, file);
    fclose(file);

    printf("Account created successfully!\n");
}

void login() {
    char name[MAX_NAME_LENGTH], password[MAX_PASS_LENGTH];
    Account account;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your password: ");
    scanf("%s", password);

    if (authenticate(name, password, &account)) {
        showMenu(&account);
    } else {
        printf("Authentication failed!\n");
    }
}

void showMenu(Account *account) {
    int choice;

    while (1) {
        printf("\n=== Menu ===\n");
        printf("1. Transfer Money\n");
        printf("2. Check Balance\n");
        printf("3. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                transferMoney(account);
                break;
            case 2:
                checkBalance(account);
                break;
            case 3:
                return;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}

void transferMoney(Account *account) {
    char receiverName[MAX_NAME_LENGTH];
    float amount;
    FILE *file;
    Account receiver;
    int found = 0;

    printf("Enter receiver's name: ");
    scanf("%s", receiverName);
    printf("Enter amount to transfer: ");
    scanf("%f", &amount);

    if (amount > account->balance) {
        printf("Insufficient balance!\n");
        return;
    }

    file = fopen("users.dat", "rb+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fread(&receiver, sizeof(Account), 1, file)) {
        if (strcmp(receiver.name, receiverName) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        account->balance -= amount;
        receiver.balance += amount;

        // Update receiver account
        fseek(file, -sizeof(Account), SEEK_CUR);
        fwrite(&receiver, sizeof(Account), 1, file);

        // Update sender account
        fseek(file, 0, SEEK_SET);
        while (fread(&receiver, sizeof(Account), 1, file)) {
            if (strcmp(receiver.name, account->name) == 0) {
                fseek(file, -sizeof(Account), SEEK_CUR);
                fwrite(account, sizeof(Account), 1, file);
                break;
            }
        }

        printf("Transfer successful!\n");
        printf("New Balance: %.2f\n", account->balance);
    } else {
        printf("Receiver not found!\n");
    }

    fclose(file);
}

void checkBalance(Account *account) {
    printf("Current Balance: %.2f\n", account->balance);
}

int authenticate(const char *name, const char *password, Account *account) {
    FILE *file;
    file = fopen("users.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    while (fread(account, sizeof(Account), 1, file)) {
        if (strcmp(account->name, name) == 0 && strcmp(account->password, password) == 0) {
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}
