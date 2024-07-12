#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring all the functions
void checkbalance(char*);
void transfermoney(void);
void display(char*);
void person(char*);
void login(void);
void loginsu(void);
void account(void);
void accountcreated(void);
void afterlogin(void);
void logout(void);

// Creating a structure to store data of the user
struct pass {
    char username[50];
    int date, month, year;
    char pnumber[15];
    char adharnum[20];
    char fname[20];
    char lname[20];
    char fathname[20];
    char mothname[20];
    char address[50];
    char typeaccount[20];
};

// Structure to keep track of amount transfer
struct money {
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
};

struct userpass {
    char password[50];
};

// Driver Code
int main() {
    int choice;

    printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
    printf("**********************************\n");
    printf("DEVELOPER-Rukonuzzama Topu\n");
    printf("**********************************\n");
    printf("1.... CREATE A BANK ACCOUNT\n");
    printf("2.... ALREADY A USER? SIGN IN\n");
    printf("3.... EXIT\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n\nUSERNAME 50 CHARACTERS MAX!!\n");
            printf("PASSWORD 50 CHARACTERS MAX!!\n");
            account();
            break;
        case 2:
            login();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice. Exiting...\n");
            exit(1);
    }
    return 0;
}

// Function to create accounts of users
void account(void) {
    char password[50];
    int i;
    char ch;
    FILE *fp;
    struct pass u1;
    struct userpass p1;

    fp = fopen("username.txt", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n\n!!!!!CREATE ACCOUNT!!!!!\n");
    printf("FIRST NAME: ");
    scanf("%s", u1.fname);
    printf("LAST NAME: ");
    scanf("%s", u1.lname);
    printf("FATHER's NAME: ");
    scanf("%s", u1.fathname);
    printf("MOTHER's NAME: ");
    scanf("%s", u1.mothname);
    printf("ADDRESS: ");
    scanf("%s", u1.address);
    // printf("ACCOUNT TYPE: ");
    // scanf("%s", u1.typeaccount);
    // printf("DATE OF BIRTH (DD MM YYYY): ");
    // scanf("%d %d %d", &u1.date, &u1.month, &u1.year);
    // printf("ADHAR NUMBER: ");
    // scanf("%s", u1.adharnum);
    printf("PHONE NUMBER: ");
    scanf("%s", u1.pnumber);
    printf("USERNAME: ");
    scanf("%s", u1.username);
    printf("PASSWORD: ");
    scanf("%s", password); // Simplified password input

    strcpy(p1.password, password);

    fwrite(&u1, sizeof(u1), 1, fp);
    fclose(fp);

    accountcreated();
}

// Successful account creation
void accountcreated(void) {
    printf("PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....\n");
    for (volatile int i = 0; i < 200000; i++);
    printf("ACCOUNT CREATED SUCCESSFULLY....\n");
    printf("Press enter to login");
    getchar();
    getchar();  // To capture the newline character left by previous input
    login();
}

// Login function to check the username of the user
void login(void) {
    char username[50];
    char password[50];
    int i;
    FILE *fp;
    struct pass u1;

    fp = fopen("username.txt", "rb");
    if (fp == NULL) {
        printf("ERROR IN OPENING FILE\n");
        return;
    }
    printf("ACCOUNT LOGIN\n");
    printf("USERNAME: ");
    scanf("%s", username);
    printf("PASSWORD: ");
    scanf("%s", password);

    while (fread(&u1, sizeof(u1), 1, fp)) {
        if (strcmp(username, u1.username) == 0) {
            loginsu();
            display(username);
            fclose(fp);
            return;
        }
    }
    printf("\nInvalid username or password.\n");
    fclose(fp);
}

// Redirect after successful login
void loginsu(void) {
    printf("Fetching account details.....\n");
    for (volatile int i = 0; i < 200; i++);
    printf("LOGIN SUCCESSFUL....\n");
    printf("Press enter to continue");
    getchar();
}

// Display function to show the data of the user on screen
void display(char username1[]) {
    FILE* fp;
    int choice;
    struct pass u1;

    fp = fopen("username.txt", "rb");
    if (fp == NULL) {
        printf("Error in opening file\n");
        return;
    }

    while (fread(&u1, sizeof(u1), 1, fp)) {
        if (strcmp(username1, u1.username) == 0) {
            printf("WELCOME, %s %s\n", u1.fname, u1.lname);
            printf("==== YOUR ACCOUNT INFO ====\n");
            printf("NAME: %s %s\n", u1.fname, u1.lname);
            printf("FATHER's NAME: %s\n", u1.fathname);
            printf("MOTHER's NAME: %s\n", u1.mothname);
            // printf("ADHAR CARD NUMBER: %s\n", u1.adharnum);
            // printf("MOBILE NUMBER: %s\n", u1.pnumber);
            // printf("DATE OF BIRTH: %d-%d-%d\n", u1.date, u1.month, u1.year);
            // printf("ADDRESS: %s\n", u1.address);
            // printf("ACCOUNT TYPE: %s\n", u1.typeaccount);
        }
    }
    fclose(fp);

    printf("HOME\n");
    printf("1....CHECK BALANCE\n");
    printf("2....TRANSFER MONEY\n");
    printf("3....LOG OUT\n");
    printf("4....EXIT\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            checkbalance(username1);
            break;
        case 2:
            transfermoney();
            break;
        case 3:
            logout();
            login();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice. Exiting...\n");
            exit(1);
    }
}

// Function to transfer money from one user to another
void transfermoney(void) {
    FILE *fm, *fp;
    struct pass u1;
    struct money m1;
    char usernamet[50];
    char usernamep[50];

    fp = fopen("username.txt", "rb");
    fm = fopen("mon.txt", "ab");
    if (fp == NULL || fm == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("---- TRANSFER MONEY ----\n");
    printf("FROM (your username): ");
    scanf("%s", usernamet);
    printf("TO (username of person): ");
    scanf("%s", usernamep);

    while (fread(&u1, sizeof(u1), 1, fp)) {
        if (strcmp(usernamep, u1.username) == 0) {
            strcpy(m1.usernameto, u1.username);
            strcpy(m1.userpersonfrom, usernamet);
        }
    }

    printf("ENTER THE AMOUNT TO BE TRANSFERRED: ");
    scanf("%ld", &m1.money1);

    fwrite(&m1, sizeof(m1), 1, fm);
    printf("AMOUNT SUCCESSFULLY TRANSFERRED....\n");

    fclose(fp);
    fclose(fm);

    display(usernamet);
}

// Function to check balance in users account
void checkbalance(char username2[]) {
    FILE* fm;
    struct money m1;
      int i = 1, summoney = 0;

    fm = fopen("mon.txt", "rb");
    if (fm == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("==== BALANCE DASHBOARD ====\n");
    printf("S no.\tTRANSACTION ID\tAMOUNT\n");

    while (fread(&m1, sizeof(m1), 1, fm)) {
        if (strcmp(username2, m1.usernameto) == 0) {
            printf("%d\t%s\t%ld\n", i, m1.userpersonfrom, m1.money1);
            i++;
            summoney += m1.money1;
        }
    }

    printf("TOTAL AMOUNT: %d\n", summoney);
    fclose(fm);
    display(username2);
}

// Logout function to bring user to the login screen
void logout(void) {
    printf("Logging out");
    for (volatile int i = 0; i < 100000000; i++);
    printf("Sign out successfully..\n");
    printf("Press any key to continue..");
    getchar();
}

