#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %dth term:\n", n);
    fibonacci(n, 0, 1);
    printf("\n");
    return 0;
}

