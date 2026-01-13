#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    int oneRow = 0, oneCol = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                oneRow = i;
                oneCol = j;
            }
        }
    }

    int moves = abs(oneRow - 2) + abs(oneCol - 2);

    printf("%d\n", moves);

    return 0;
}