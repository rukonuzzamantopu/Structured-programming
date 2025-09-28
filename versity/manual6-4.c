#include <stdio.h>
int main() {
    int rows, colm;
    printf("Enter the number of rowsand colum: ");
    scanf("%d%d", &rows,&colm);
    int matrix[rows][colm];
    int transpose[colm][rows];
    int i, j;
    printf("Enter the elements of the %d x %d matrix:\n", rows, colm);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < colm; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < colm; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < colm; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < colm; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

