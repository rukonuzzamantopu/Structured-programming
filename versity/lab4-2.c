#include <stdio.h>

void fibonacci(int limit) {
    int a = 0, b = 1, nextTerm = 0;
    
    printf("Fibonacci series below %d:\n", limit);
    printf("%d, %d, ", a, b);

    while (nextTerm < limit) {
        nextTerm = a + b;
        if (nextTerm >= limit)
            break;
        printf("%d, ", nextTerm);
        a = b;
        b = nextTerm;
    }
    printf("\n");
}

int main() {
    int limit;
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);
    fibonacci(limit);
    return 0;
}
