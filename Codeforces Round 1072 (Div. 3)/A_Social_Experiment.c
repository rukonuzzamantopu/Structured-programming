#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        if (n == 2)
            printf("2\n");
        else if (n == 3)
            printf("3\n");
        else if (n % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
