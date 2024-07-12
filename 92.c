#include <stdio.h>

void printFibonacci(int limit) {
    int first = 0, second = 1, next = 0;

    printf("Fibonacci Series up to %d:\n", limit);

    while (next < limit) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
    printf("\n");
}

int main() {
    int limit = 1000;
    printFibonacci(limit);
    return 0;
}
