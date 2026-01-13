#include <stdio.h>
#include <limits.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int min_sum = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int current = arr[i] + arr[j] + (j - i);
                if (current < min_sum)
                {
                    min_sum = current;
                }
            }
        }

        printf("%d\n", min_sum);
    }
    return 0;
}