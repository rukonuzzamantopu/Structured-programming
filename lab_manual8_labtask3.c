#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

void findFrequency(const char* str) {
    int frequency[MAX_CHAR] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    printf("Character Frequencies:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        findFrequency(str);
    } else {
        printf("Error reading input.\n");
    }
    return 0;
}

