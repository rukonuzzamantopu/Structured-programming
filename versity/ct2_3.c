#include <stdio.h>

// Function to calculate the length of the string using recursion
int stringLength(char *str) {
    // Base case: if we reach the end of the string, return 0
    if (*str == '\0') {
        return 0;
    } else {
        // Recursive case: move to the next character and add 1 to the result
        return 1 + stringLength(str + 1);
    }
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate the length using recursion
    int length = stringLength(str);
    
    // Print the length of the string
    printf("The length of the string is: %d\n", length);
    
    return 0;
}
