#include <stdio.h>

void printDigits(long long n)
{
    if (n < 10)
    {
        printf("%lld ", n);
        return;
    }

    printDigits(n / 10);
    printf("%lld ", n % 10);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long N;
        scanf("%lld", &N);

        if (N == 0)
            printf("0 ");
        else
            printDigits(N);

        printf("\n");
    }

    return 0;
}
