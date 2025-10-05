#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 100)
    {
        printf("Greater than 100\n");
    }
    if (a <= 100)
    {
        printf("Less than or equal to 100\n");
    }
    if (a > 50)
    {
        printf("Greater than 50\n");
    }
    if (a <= 50)
    {
        printf("Less than or equal to 50\n");
    }
    if (a > 20)
    {
        printf("Greater than 20\n");
    }
    if (a <= 20)
    {
        printf("Less than or equal to 20\n");
    }

    return 0;
}