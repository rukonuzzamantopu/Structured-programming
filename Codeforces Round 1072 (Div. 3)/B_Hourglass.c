
#include <stdio.h>

int main(void)
{
    int t;
    if (scanf("%d", &t) != 1)
        return 0;
    while (t--)
    {
        long long x, y, z;
        if (scanf("%lld %lld %lld", &x, &y, &z) != 3)
            return 0;
        long long a = z / y;
        long long b = a * y;
        long long c = z - b;
        long long r;
        if (y >= x)
            r = x;
        else
            r = (a % 2 == 0) ? x : y;
        long long ans = r - c;
        if (ans < 0)
            ans = 0;
        printf("%lld\n", ans);
    }
    return 0;
}
