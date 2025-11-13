
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        int mul = a * b * c;

        if (m == 0)
        {
            printf("0");
            continue;
        }
        for (int j = 1; j <= m; j++)
        {
            if (mul * j == m)
            {
                printf("%d\n", j);
                break;
            }
            else if (mul * j > m)
            {
                printf("-1\n");
                break;
            }
        }
    }
    return 0;
}
