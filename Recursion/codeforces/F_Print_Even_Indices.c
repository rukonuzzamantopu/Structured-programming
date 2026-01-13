#include <stdio.h>

long long a[1005];

void printEvenReverse(int i)
{
    if (i < 0)
        return;

    if (i % 2 == 0)
        printf("%lld ", a[i]);

    printEvenReverse(i - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%lld", &a[i]);

    printEvenReverse(N - 1);

    return 0;
}
