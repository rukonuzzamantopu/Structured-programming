#include <stdio.h>
int main()
{
    int n;
    int x;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (x > 0)
        {
            positive++;
        }
        else if (x < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\n Odd: %d\n Positive: %d\n Negative: %d\n", even, odd, positive, negative);

    return 0;
}