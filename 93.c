#include <stdio.h>

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows = 6; // Change this value for different rows
    printf("Pascal's Triangle up to %d rows:\n", rows);
    printPascalTriangle(rows);
    return 0;
}
