#include <stdio.h>

int main() {
    int number, temp, firstDigit, lastDigit, numDigits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    while(temp != 0) {
        temp /= 10;
        numDigits++;
    }
    lastDigit = number % 10;
    
    temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    int power = 1;
    for (int i = 1; i < numDigits; i++) {
        power *= 10;
    }
    
    int swappedNumber = lastDigit * power;
    swappedNumber += number % power;
    swappedNumber -= lastDigit;
    swappedNumber += firstDigit;
    
    printf("Original number: %d\n", number);
    printf("Number after swapping first and last digits: %d\n", swappedNumber);
    
    return 0;
}
