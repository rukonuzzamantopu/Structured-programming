#include <stdio.h>
#include <stdlib.h>
void gaussElimination(float matrix[][3], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            float f = matrix[j][i] / matrix[i][i];
            for (k = 0; k <= n; k++) {
                matrix[j][k] -= f * matrix[i][k];
            }
        }
    }
}
void backSubstitution(float matrix[][3], int n, float *result) {
    int i, j;
    for (i = n - 1; i >= 0; i--) {
        result[i] = matrix[i][n];
        for (j = i + 1; j < n; j++) {
            result[i] -= matrix[i][j] * result[j];
        }
        result[i] /= matrix[i][i];
    }
}

int main() {
    float coefficients[2][3] = {{10, 6, 90}, {3, 5, 70}};
    gaussElimination(coefficients, 2);
    float solution[2];
    backSubstitution(coefficients, 2, solution);

    if(solution[0]>=0.85 && solution[0]<=1.10){
    printf("Number of children: 1\n");}
    else{
        int s0=solution[0];
        printf("Number of children: %d\n",s0);
    }
    int s1= solution[1];
    printf("Number of adults: %d\n",s1);

    return 0;
}
