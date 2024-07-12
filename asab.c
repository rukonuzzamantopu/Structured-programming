#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int account_number;
    char name[50];
    char password[20];
    float balance;
} accounts[MAX_ACCOUNTS];

int num_accounts = 0;

// Function prototypes
void create_account();
int login();
void check_balance(int index);
void deposit(int index);
void withdraw(int index);
void balance_transfer(int index);
void account_search();
int find_account(int account_number);

void display_welcome_message() {
    printf("**************************************\n");
    printf("  Welcome to Dhaka Bank Limited\n");
    printf("  DEVELOPER-ASHAB UDDIN\n");
    printf("**************************************\n\n");
}

int main() {
    int choice, login_index = -1;

    display_welcome_message();

    do {
        printf("1. Create Account\n2. Login\n3. Check Balance\n4. Deposit\n5. Withdraw\n6. Balance Transfer\n7. Account Search\n8. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_account();
                break;
            case 2:
                login_index = login();
                break;
            case 3:
                if (login_index != -1) {
                    check_balance(login_index);
                } else {
                    printf("Please login first.\n");
                }
                break;
            case 4:
                if (login_index != -1) {
                    deposit(login_index);
                } else {
                    printf("Please login first.\n");
                }
                break;
            case 5:
                if (login_index != -1) {
                    withdraw(login_index);
                } else {
                    printf("Please login first.\n");
                }
                break;
            case 6:
                if (login_index != -1) {
                    balance_transfer(login_index);
                } else {
                    printf("Please login first.\n");
                }
                break;
            case 7:
                account_search();
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void create_account() {
    if (num_accounts < MAX_ACCOUNTS) {
        struct Account new_account;
        printf("Enter account number: ");
        scanf("%d", &new_account.account_number);
        printf("Enter name: ");
        getchar();  // Clear the newline character from the buffer
        fgets(new_account.name, sizeof(new_account.name), stdin);
        new_account.name[strcspn(new_account.name, "\n")] = '\0';  // Remove newline character
        printf("Enter password: ");
        scanf("%s", new_account.password);
        new_account.balance = 0.0f;

        accounts[num_accounts] = new_account;
        num_accounts++;
        printf("Account created successfully!\n");
    } else {
        printf("Account limit reached. Cannot create more accounts.\n");
    }
}

int login() {
    int account_number;
    char password[20];

    printf("Enter account number: ");
    scanf("%d", &account_number);
    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number && strcmp(accounts[i].password, password) == 0) {
            printf("Login successful!\n");
            return i;
        }
    }
    printf("Invalid account number or password.\n");
    return -1;
}

void check_balance(int index) {
    printf("Current balance: %.2f\n", accounts[index].balance);
}

void deposit(int index) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        accounts[index].balance += amount;
        printf("Amount deposited successfully!\n");
    } else {
        printf("Invalid amount.\n");
    }
}

void withdraw(int index) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= accounts[index].balance) {
        accounts[index].balance -= amount;
        printf("Amount withdrawn successfully!\n");
    } else {
        printf("Invalid amount or insufficient balance.\n");
    }
}

void balance_transfer(int index) {
    int target_account_number, target_index;
    float amount;

    printf("Enter target account number: ");
    scanf("%d", &target_account_number);
    target_index = find_account(target_account_number);

    if (target_index != -1) {
        printf("Enter amount to transfer: ");
        scanf("%f", &amount);

        if (amount > 0 && amount <= accounts[index].balance) {
            accounts[index].balance -= amount;
            accounts[target_index].balance += amount;
            printf("Amount transferred successfully!\n");
        } else {
            printf("Invalid amount or insufficient balance.\n");
        }
    } else {
        printf("Target account not found.\n");
    }
}

void account_search() {
    int account_number, index;
    printf("Enter account number to search: ");
    scanf("%d", &account_number);

    index = find_account(account_number);
    if (index != -1) {
        printf("Account found: \nAccount Number: %d\nName: %s\nBalance: %.2f\n", accounts[index].account_number, accounts[index].name, accounts[index].balance);
    } else {
        printf("Account not found.\n");
    }
}

int find_account(int account_number) {
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
            return i;
        }
    }
    return -1;
}