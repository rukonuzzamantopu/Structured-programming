#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main() {
    srand(time(NULL)); // Seed the random number generator

    printf("Generated Password: ");
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        printf("%d", rand() % 10); // Generate a random digit (0-9)
    }
    printf("\n");

    return 0;
}
