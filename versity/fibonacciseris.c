#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d:\n", n);

    printf("%d, %d, ", first, second);
    
    next = first + second;
    
    while (next < n) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");

    return 0;
}


