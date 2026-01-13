#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int isZeroMatrix = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                isZeroMatrix++;
            }
        }
    }

    int rowcolumn = r * c;

    if (r == 0 || c == 0)
    {
        printf("Zero Matrix\n");
        return 0;
    }

    if (isZeroMatrix == rowcolumn)
    {
        printf("Zero Matrix\n");
    }
    else
    {
        printf("not zero  Matrix\n");
    }
    return 0;
}