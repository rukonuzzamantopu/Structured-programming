#include <stdio.h>

void printBinary(long long n)
{
    if (n == 0)
        return;

    printBinary(n / 2);
    printf("%lld", n % 2);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long N;
        scanf("%lld", &N);

        printBinary(N);
        printf("\n");
    }

    return 0;
}
