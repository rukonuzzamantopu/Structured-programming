#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    int isPalindrome = 1; // Assume the string is a palindrome initially

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}