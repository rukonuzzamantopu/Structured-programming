#include <stdio.h>

long long a[1005];

long long sumArray(int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + sumArray(n - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%lld", &a[i]);

    printf("%lld", sumArray(N));

    return 0;
}
