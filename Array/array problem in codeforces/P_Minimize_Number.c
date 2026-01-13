#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long x;
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x);

        int cnt = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            cnt++;
        }

        if (cnt < ans)
            ans = cnt;
    }

    printf("%d", ans);
    return 0;
}
