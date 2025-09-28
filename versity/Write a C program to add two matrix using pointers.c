#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a matrix
int** allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free the allocated memory for a matrix
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to input matrix elements
void inputMatrix(int **matrix, int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

// Function to print the matrix
void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int **matrixA, int **matrixB, int **matrixC, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(matrixC + i) + j) = *(*(matrixA + i) + j) + *(*(matrixB + i) + j);
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrices
    int **matrixA = allocateMatrix(rows, cols);
    int **matrixB = allocateMatrix(rows, cols);
    int **matrixC = allocateMatrix(rows, cols);

    // Input matrices
    printf("Input Matrix A:\n");
    inputMatrix(matrixA, rows, cols);
    printf("Input Matrix B:\n");
    inputMatrix(matrixB, rows, cols);

    // Add matrices
    addMatrices(matrixA, matrixB, matrixC, rows, cols);

    // Print the resulting matrix
    printf("Resulting Matrix after Addition:\n");
    printMatrix(matrixC, rows, cols);

    // Free the allocated memory
    freeMatrix(matrixA, rows);
    freeMatrix(matrixB, rows);
    freeMatrix(matrixC, rows);

    return 0;
}
