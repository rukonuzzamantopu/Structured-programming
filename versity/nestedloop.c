#include <stdio.h>

int main() {
    // First loop to print numbers from 1 to 4
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Second loop to print numbers from 3 to 1
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
