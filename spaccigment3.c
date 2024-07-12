#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char words[N][51];
    int max_length = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
        int length = strlen(words[i]);
        if (length > max_length) {
            max_length = length;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%*s\n", max_length, words[i]);
    }

    return 0;
}
