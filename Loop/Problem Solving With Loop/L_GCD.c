#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd = 1; 
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i; 
        }
    }
    printf("%d\n", gcd);
    return 0;
}