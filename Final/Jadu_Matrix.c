
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

    if (n == m)
    {
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                if (k == l || k == (n - 1) - l)
                {
                    if (matrix[k][l] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        printf("NO");
                        return 0;
                    }
                }
                else if (matrix[k][l] == 0)
                {
                    continue;
                }
                else
                {
                    printf("NO");
                    return 0;
                }
            }
        }
        for (int k = n - 1; k >= 0; k--)
        {
            for (int l = n - 1; l >= 0; l--)
            {
                if (k == l || k == (n - 1) - l)
                {
                    if (matrix[k][l] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        printf("NO");
                        return 0;
                    }
                }
                else if (matrix[k][l] == 0)
                {
                    continue;
                }
                else
                {
                    printf("NO");
                    return 0;
                }
            }
        }
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
