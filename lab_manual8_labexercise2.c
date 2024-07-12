#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *str, int *alphabets, int *digits, int *specialChars) {
    *alphabets = 0;
    *digits = 0;
    *specialChars = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            (*alphabets)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else {
            (*specialChars)++;
        }
    }
}

int main() {
    printf("This program counts the number of alphabets, digits, and special characters in a string.\n");

    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int alphabets, digits, specialChars;

    countCharacters(str, &alphabets, &digits, &specialChars);

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
