#include <stdio.h>

void printDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    printDigits(n / 10);
    int last = n % 10;
    printf("%d ", last);
}
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
        {
            printf("0");
        }
        printDigits(x);
        printf("\n");
    }
    return 0;
}