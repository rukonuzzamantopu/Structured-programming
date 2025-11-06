#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
}
int subtract()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a - b);
}

int main()
{
    sum();
    subtract();
    return 0;
}