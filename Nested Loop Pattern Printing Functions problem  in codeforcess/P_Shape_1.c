#include <stdio.h>
int main()
{
    int n;
    
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }

        // for (int j = 0; j < star; j++)
        // {
        //     printf(" ");
        // }
        star --;
        printf("\n");
    }
    return 0;
}