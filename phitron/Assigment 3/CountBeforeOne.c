#include <stdio.h>

int count_before_one(int a[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            break;  
        }
        c++;
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = count_before_one(a, n);
    printf("%d\n", result);

    return 0;
}
