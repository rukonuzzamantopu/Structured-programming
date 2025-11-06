#include <stdio.h>
int main()
{
    int n, val  = 1;
    
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < val; j++)
        {
            printf("Sorry");
        }
        val ++;
        space--;
        printf("\n");
    }
    return 0;
}