#ifndef BANK_H
#define BANK_H

#define MAX_NAME_LENGTH 50
#define MAX_PASS_LENGTH 20

typedef struct {
    char name[MAX_NAME_LENGTH];
    char password[MAX_PASS_LENGTH];
    float balance;
} Account;

void createAccount();
void login();
void showMenu(Account *account);
void transferMoney(Account *account);
void checkBalance(Account *account);
int authenticate(const char *name, const char *password, Account *account);

#endif
