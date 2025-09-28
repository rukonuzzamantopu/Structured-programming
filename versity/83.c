#include <stdio.h>

int main() {
    int number, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number;

    while (number != 0) {
        digit = number % 10;
        if (digit != 0) {
            product *= digit;
        }
        number /= 10;
    }

    printf("Product of non-zero digits of %d is: %d\n", originalNumber, product);

    return 0;
}
