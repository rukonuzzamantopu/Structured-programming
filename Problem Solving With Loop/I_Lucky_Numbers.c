#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 10 && n <= 99)
    {
        int a = n / 10;
        int b = n % 10;
        if (b != 0 && a % b == 0)
            printf("YES\n");
        else if (a != 0 && b % a == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {
        return 0;
    }
}
