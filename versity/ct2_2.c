#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Find the end of the first string using a for loop
    for (i = 0; str1[i] != '\0'; i++) {
        // Just iterating to find the length
    }

    // Concatenate str2 to the end of str1 using a for loop
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0';  // Null-terminate the concatenated string

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
