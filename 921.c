#include <stdio.h>

void printFibonacci(int limit) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d:\n", limit);
    printf("%d %d ", first, second); // Print first two elements

    next = first + second;
    while (next < limit) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
}

int main() {
    int limit = 1000;
    printFibonacci(limit);
    return 0;
}
