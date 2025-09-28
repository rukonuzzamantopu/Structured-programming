#include <stdio.h>

int isPalindrome(int number) {
    int reversed = 0, original = number;

    while (number > 0) {
        int remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    return original == reversed;
}

int main() {
    int num;=
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
