#include <stdio.h>
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (rows == cols)
    {
        int isSecondaryDiagonal = 1;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (i + j != rows - 1 && arr[i][j] != 0)
                {
                    isSecondaryDiagonal = 0;
                    break;
                }
            }
        }
        if (isSecondaryDiagonal)
        {
            printf("Secondary Diagonal Matrix\n");
        }
        else
        {
            printf("Not Secondary Diagonal Matrix\n");
        }
    }
    else
    {
        printf("Not Secondary Diagonal Matrix\n");
    }
    return 0;
}