#include <stdio.h>
int main()  {
    int n;
    scanf("%d", &n);
    int original = n;
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("%d\n", reversed);
    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}