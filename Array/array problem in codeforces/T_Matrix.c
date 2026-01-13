#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primary = 0, secondary = 0;

    for (int i = 0; i < n; i++)
    {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }

    int diff = primary - secondary;
    if (diff < 0)
        diff = -diff;

    printf("%d", diff);

    return 0;
}
