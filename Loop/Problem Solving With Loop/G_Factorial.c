
#include <stdio.h>
int main()  {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int n;
        long long int fact = 1;
        scanf("%lld", &n);
        for (long long int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }

    return 0;
}