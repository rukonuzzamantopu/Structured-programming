#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int step = (n / 2) + 6;
    int s = step - 1;

    int k = 0;
    for (int i = 0; i < step; i++)
    {
        for (int l = 1; l <= s; l++)
        {
            printf(" ");
        }

        for (int j = 0; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k += 2;
        s--;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("     ");
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}