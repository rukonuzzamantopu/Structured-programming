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

struct userpass {
    char username[50];
    char password[50];
};

// Structure to keep track of amount transfer
struct money {
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
};

// Function prototypes
void printMainMenu(void);
void clearConsole(void);
void pressAnyKeyToContinue(void);

// Driver Code
int main() {
    int choice;

    printMainMenu();

    printf("\n\nENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            clearConsole();
            printf("\n\n USERNAME 50 CHARACTERS MAX!!");
            printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
            account();
            break;
        case 2:
            login();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice. Please try again.");
    }
    return 0;
}

// Function to display the main menu
void printMainMenu(void) {
    clearConsole();
    printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
    printf("**********************************\n");
    printf("DEVELOPER-Rukonuzzama Topu\n");
    printf("**********************************\n");
    printf("1. CREATE A BANK ACCOUNT\n");
    printf("2. ALREADY A USER? SIGN IN\n");
    printf("3. EXIT\n");
}

// Function to clear the console
void clearConsole(void) {
    system("clear"); // Use "cls" for Windows
}

// Function to press any key to continue
void pressAnyKeyToContinue(void) {
    printf("Press any key to continue...\n");
    getchar();
    getchar();
}

// Function to create accounts of users
void account(void) {
    char password[50];
    int i;
    char ch;
    FILE *fp;
    struct pass u1;
    struct userpass u2;

    clearConsole();
    printf("\n\n!!!!!CREATE ACCOUNT!!!!!\n\n");

    printf("FIRST NAME: ");
    scanf("%s", u1.fname);

    printf("LAST NAME: ");
    scanf("%s", u1.lname);

    printf("FATHER's NAME: ");
    scanf("%s", u1.fathname);

    // printf("MOTHER's NAME: ");
    // scanf("%s", u1.mothname);

    // printf("ADDRESS: ");
    // scanf("%s", u1.address);

    // printf("ACCOUNT TYPE: ");
    // scanf("%s", u1.typeaccount);

    // printf("DATE OF BIRTH\n");
    // printf("DATE: ");
    // scanf("%d", &u1.date);
    // printf("MONTH: ");
    // scanf("%d", &u1.month);
    // printf("YEAR: ");
    // scanf("%d", &u1.year);

    // printf("ADHAR NUMBER: ");
    // scanf("%s", u1.adharnum);

    // printf("PHONE NUMBER: ");
    // scanf("%s", u1.pnumber);

    printf("USERNAME: ");
    scanf("%s", u1.username);
    strcpy(u2.username, u1.username);

    printf("PASSWORD: ");
    for (i = 0; i < 50; i++) {
        ch = getchar();
        if (ch != '\n') {
            password[i] = ch;
            printf("*");
        } else {
            password[i] = '\0';
            break;
        }
    }
    strcpy(u2.password, password);

    // Write user details to file
    fp = fopen("username.txt", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    fwrite(&u1, sizeof(u1), 1, fp);
    fclose(fp);

    // Write user credentials to file
    fp = fopen("userpass.txt", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    fwrite(&u2, sizeof(u2), 1, fp);
    fclose(fp);

    accountcreated();
}

// Successful account creation
void accountcreated(void) {
    clearConsole();
    printf("PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....\n");
    for (int i = 0; i < 200000000; i++); // Simulate processing delay

    printf("ACCOUNT CREATED SUCCESSFULLY....\n");
    pressAnyKeyToContinue();
    login();
}

// Login function to check the username of the user
void login(void) {
    clearConsole();

    char username[50];
    char password[50];
    char ch;
    FILE *fp;
    struct userpass u2;
    int i;

    fp = fopen("userpass.txt", "rb");
    if (fp == NULL) {
        printf("ERROR IN OPENING FILE\n");
        exit(1);
    }

    printf("ACCOUNT LOGIN\n");
    printf("USERNAME: ");
    scanf("%s", username);

    printf("PASSWORD: ");
    for (i = 0; i < 50; i++) {
        ch = getchar();
        if (ch != '\n') {
            password[i] = ch;
            printf("*");
        } else {
            password[i] = '\0';
            break;
        }
    }

    while (fread(&u2, sizeof(u2), 1, fp)) {
        if (strcmp(username, u2.username) == 0 && strcmp(password, u2.password) == 0) {
            fclose(fp);
            loginsu();
            display(username);
            return;
        }
    }

    fclose(fp);
    printf("Invalid username or password.\n");
    pressAnyKeyToContinue();
    login();
}

// Redirect after successful login
void loginsu(void) {
    clearConsole();
    printf("Fetching account details.....\n");
    for (int i = 0; i < 20000; i++); // Simulate processing delay

    printf("LOGIN SUCCESSFUL....\n");
    pressAnyKeyToContinue();
}

// Display function to show the data of the user on screen
void display(char username1[]) {
    clearConsole();
    FILE *fp;
    int choice;
    struct pass u1;

    fp = fopen("username.txt", "rb");
    if (fp == NULL) {
        printf("Error in opening file.\n");
        exit(1);
    }

    while (fread(&u1, sizeof(u1), 1, fp)) {
        if (strcmp(username1, u1.username) == 0) {
            printf("WELCOME, %s %s\n", u1.fname, u1.lname);
            printf("==== YOUR ACCOUNT INFO ====\n");
            printf("NAME: %s %s\n", u1.fname, u1.lname);
            printf("FATHER's NAME: %s\n", u1.fathname);
            // printf("MOTHER's NAME: %s\n", u1.mothname);
            // printf("ADHAR CARD NUMBER: %s\n", u1.adharnum);
            // printf("MOBILE NUMBER: %s\n", u1.pnumber);
            // printf("DATE OF BIRTH: %d-%d-%d\n", u1.date, u1.month, u1.year);
            // printf("ADDRESS: %s\n", u1.address);
            // printf("ACCOUNT TYPE: %s\n", u1.typeaccount);
            break;
        }
    }
    fclose(fp);

    printf("HOME\n");
    printf("1. CHECK BALANCE\n");
    printf("2. TRANSFER MONEY\n");
    printf("3. LOG OUT\n");
    printf("4. EXIT\n");

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
        default:
            printf("Invalid choice. Please try again.");
    }
}

// Function to transfer money from one user to another
void transfermoney(void) {
    char usernamet[50], usernamep[50];
    int amount;
    FILE *fp, *fm;
    struct pass u1;
    struct money m1;

    clearConsole();

    fp = fopen("username.txt", "rb");
    if (fp == NULL) {
        printf("Error in opening file.\n");
        exit(1);
    }

    fm = fopen("mon.txt", "ab");
    if (fm == NULL) {
        printf("Error in opening file.\n");
        fclose(fp);
        exit(1);
    }

    printf("ENTER YOUR USERNAME: ");
    scanf("%s", usernamet);

    printf("ENTER THE USERNAME TO TRANSFER MONEY TO: ");
    while (1) {
        scanf("%s", usernamep);
        rewind(fp);
        int userExists = 0;
        while (fread(&u1, sizeof(u1), 1, fp)) {
            if (strcmp(usernamep, u1.username) == 0) {
                strcpy(m1.usernameto, u1.username);
                strcpy(m1.userpersonfrom, usernamet);
                userExists = 1;
                break;
            }
        }
        if (userExists) {
            break;
        } else {
            printf("Username not found. Please enter a valid username: ");
        }
    }

    printf("ENTER THE AMOUNT TO BE TRANSFERRED: ");
    scanf("%d", &amount);
    m1.money1 = amount;

    fwrite(&m1, sizeof(m1), 1, fm);
    fclose(fp);
    fclose(fm);

    printf("AMOUNT SUCCESSFULLY TRANSFERRED....\n");
    pressAnyKeyToContinue();
    display(usernamet);
}

// Function to check balance in user's account
void checkbalance(char username2[]) {
    clearConsole();
    FILE *fm;
    struct money m1;
    int totalAmount = 0;
    int i = 1;

    fm = fopen("mon.txt", "rb");
    if (fm == NULL) {
        printf("Error in opening file.\n");
        exit(1);
    }

    printf("==== BALANCE DASHBOARD ====\n");
    printf("S no.\tTRANSACTION ID\tAMOUNT\n");

    while (fread(&m1, sizeof(m1), 1, fm)) {
        if (strcmp(username2, m1.usernameto) == 0) {
            printf("%d\t%s\t%d\n", i++, m1.userpersonfrom, m1.money1);
            totalAmount += m1.money1;
        }
    }
    fclose(fm);

    printf("TOTAL AMOUNT: %d\n", totalAmount);
    pressAnyKeyToContinue();
    display(username2);
}

// Logout function to bring user to the login screen
void logout(void) {
    clearConsole();
    printf("Logging out");
    for (int i = 0; i < 10; i++) {
        printf(".");
        for (int j = 0; j < 25000000; j++);
    }
    printf("Sign out successfully..\n");
    pressAnyKeyToContinue();
}
