
#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    int c1 = 0;
    int c2 = 0;

    scanf("%d", &n);
    int space = (n * 2) - 2;

    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            if (c1 == 0)
            {
                printf("#");
                c2 = 1;
            }
            else if (c1 == 1)
            {
                printf("-");
                c2 = 0;
            }
        }
        printf("\n");
        c1 = c2;
        k += 2;
    }

    k -= 4;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            if (c1 == 0)
            {
                printf("#");
                c2 = 1;
            }
            else if (c1 == 1)
            {
                printf("-");
                c2 = 0;
            }
        }
        printf("\n");
        c1 = c2;
        k -= 2;
    }
    return 0;
}
