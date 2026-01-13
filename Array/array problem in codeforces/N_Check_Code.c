#include <stdio.h>
#include <string.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    char S[A + B + 2];
    scanf("%s", S);

    if (S[A] == '-' && strlen(S) == A + B + 1)
    {
        int valid = 1;

        for (int i = 0; i < A + B + 1; i++)
        {
            if (i != A)
            {
                if (S[i] < '0' || S[i] > '9')
                {
                    valid = 0;
                    break;
                }
            }
        }

        if (valid)
            printf("Yes\n");
        else
            printf("No\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}