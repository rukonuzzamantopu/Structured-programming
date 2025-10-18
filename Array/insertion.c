#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ind, val;
    scanf("%d %d", &ind, &val);
    for (int i = n; i > ind; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[ind] = val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}