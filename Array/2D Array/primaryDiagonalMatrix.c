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

    if (r == c)
    {

        int isDiagonal = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j && arr[i][j] != 0)
                {
                    isDiagonal = 0;
                    break;
                }
            }
        }

        if (isDiagonal)
        {
            printf("Diagonal Matrix\n");
        }
        else
        {
            printf("Not Diagonal Matrix\n");
        }
    }
    else
    {
        printf("Not Diagonal Matrix\n");
    }
}