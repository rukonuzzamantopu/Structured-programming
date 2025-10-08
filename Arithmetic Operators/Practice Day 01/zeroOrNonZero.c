#include <stdio.h>
int main() {
    int num;
    // printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero");
    } else {
        printf("Non Zero");
    }

    return 0;
}