#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a, y = b, z = c;

    // Sorting logic
    if (x > y) {
        int t = x; x = y; y = t;
    }
    if (x > z) {
        int t = x; x = z; z = t;
    }
    if (y > z) {
        int t = y; y = z; z = t;
    }

    // Print sorted values
    printf("%d\n%d\n%d\n\n", x, y, z);

    // Print original values
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
