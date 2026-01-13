#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], C[r][c];

    // ---------- INPUT MATRIX A ----------
    printf("\nEnter Matrix A:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // ---------- DISPLAY ----------
    printf("\nMatrix A:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // ---------- ZERO MATRIX ----------
    int zero = 1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (A[i][j] != 0)
                zero = 0;

    if (zero)
        printf("\nZero Matrix\n");
    else
        printf("\nNot Zero Matrix\n");

    // ---------- ROW SUM ----------
    printf("\nRow sums:\n");
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += A[i][j];
        printf("Row %d = %d\n", i + 1, sum);
    }

    // ---------- COLUMN SUM ----------
    printf("\nColumn sums:\n");
    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
            sum += A[i][j];
        printf("Column %d = %d\n", j + 1, sum);
    }

    // ---------- DIAGONAL SUM (square only) ----------
    if (r == c)
    {
        int dsum = 0;
        for (int i = 0; i < r; i++)
            dsum += A[i][i];
        printf("\nDiagonal Sum = %d\n", dsum);
    }

    // ---------- IDENTITY MATRIX ----------
    if (r == c)
    {
        int identity = 1;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                if ((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0))
                    identity = 0;

        if (identity)
            printf("Identity Matrix\n");
        else
            printf("Not Identity Matrix\n");
    }

    // ---------- INPUT MATRIX B ----------
    printf("\nEnter Matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // ---------- ADDITION ----------
    printf("\nA + B:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // ---------- TRANSPOSE ----------
    printf("\nTranspose of A:\n");
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    return 0;
}
