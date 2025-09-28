#include <stdio.h>

void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int stringLength(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void reverseWordsInString(char* str) {
    char* wordStart = NULL;
    char* temp = str;
    while (*temp) {
        if ((wordStart == NULL) && (*temp != ' ')) {
            wordStart = temp;
        }
        if (wordStart && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverseWord(wordStart, temp);
            wordStart = NULL;
        }
        temp++;
    }
}

int main() {
    char str[100];
    int i = 0, c;

    printf("Enter a string: ");
    while ((c = getchar()) != '\n' && c != EOF) {
        str[i++] = c;
    }
    str[i] = '\0';

    reverseWordsInString(str);

    printf("Reversed words: ");
    for (int j = 0; j < stringLength(str); j++) {
        putchar(str[j]);
    }
    printf("\n");

    return 0;
}
