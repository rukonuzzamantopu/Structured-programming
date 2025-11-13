
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < m; j++)
    {
        printf("%d ", matrix[n - 1][j]);
    }
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        printf("%d ", matrix[j][m - 1]);
    }
    return 0;
}
