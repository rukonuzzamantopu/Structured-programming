#include <stdio.h>

int main() {
    int n, term = 1, sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("The series is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        sum += term;
        term = term * 10 + 1;
    }
    
    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}
