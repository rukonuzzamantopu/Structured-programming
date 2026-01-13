#include <stdio.h>

void printNto1(int n)
{
    if (n == 0)
        return;

    printf("%d", n);

    if (n > 1)
        printf(" ");

    printNto1(n - 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    printNto1(N);
    return 0;
}
