#include <stdio.h>

long long a[1005];

long long maxValue(int n)
{
    if (n == 1)
        return a[0];

    long long m = maxValue(n - 1);

    if (a[n - 1] > m)
        return a[n - 1];
    else
        return m;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%lld", &a[i]);

    printf("%lld", maxValue(N));

    return 0;
}
