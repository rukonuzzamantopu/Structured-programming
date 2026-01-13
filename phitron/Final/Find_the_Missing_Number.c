#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        if (m % (a * b * c) == 0)
        {
            printf("%lld\n", m / (a * b * c));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
