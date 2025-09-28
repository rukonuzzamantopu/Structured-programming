#include <stdio.h>

int main() {
    int i, space, rows, k;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i) {
        for (space = 0; space < rows - i; space++) {
            printf(" ");
        }

        for (k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

