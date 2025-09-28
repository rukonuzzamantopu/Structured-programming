#include <stdio.h>
#include <string.h>

void extractSubstring(char *source, int start, int length, char *result) {
    int i;
    for(i = 0; i < length; i++) {
        result[i] = source[start + i];
    }
    result[length] = '\0';
}

int main() {
    char sourceString[] = "This is a sample string";
    int start = 5;
    int length = 7;
    char result[20];

    extractSubstring(sourceString, start, length, result);

    printf("Original String: %s\n", sourceString);
    printf("Substring: %s\n", result);

    return 0;
}



