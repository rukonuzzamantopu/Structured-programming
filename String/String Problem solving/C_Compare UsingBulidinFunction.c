#include <stdio.h>
#include <string.h>
int main()
{
    char A[100], B[100];
    scanf("%s %s", A, B);

    int value = strcmp(A, B);
    if (value < 0)
    {
        printf("%s\n", A);
    }
    else if (value > 0)
    {
        printf("%s\n", B);
    }
    else
    {
        printf("%s\n", A);
    }
    return 0;
}